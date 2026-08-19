#include <stdio.h>
#include <string.h>
#include "product.h"

Product products[MAX_PRODUCTS];
int totalProducts = 0;

static void readText(char *destination, int size)
{
    fgets(destination, size, stdin);
    destination[strcspn(destination, "\n")] = '\0';
}

static void clearBuffer(void)
{
    int c;

    while ((c = getchar()) != '\n' && c != EOF)
        ;
}

int registerProduct(void)
{
    if (totalProducts >= MAX_PRODUCTS)
    {
        printf("Error: se alcanzó el límite de %d productos.\n", MAX_PRODUCTS);
        return 0;
    }

    Product newProduct;

    printf("Ingrese el código del producto: ");
    scanf("%d", &newProduct.code);
    clearBuffer();

    if (newProduct.code < 0)
    {
        printf("Error: el código no puede ser negativo.\n");
        return 0;
    }

    if (findProductByCode(newProduct.code) != -1)
    {
        printf("Error: el código ya existe.\n");
        return 0;
    }

    printf("Ingrese el nombre: ");
    readText(newProduct.name, sizeof(newProduct.name));

    printf("Ingrese la categoría: ");
    readText(newProduct.category, sizeof(newProduct.category));

    printf("Ingrese el precio: ");
    scanf("%f", &newProduct.price);
    clearBuffer();

    printf("Ingrese la cantidad: ");
    scanf("%d", &newProduct.quantity);
    clearBuffer();

    if (newProduct.price < 0 || newProduct.quantity < 0)
    {
        printf("Error: el precio o la cantidad no son válidos.\n");
        return 0;
    }

    products[totalProducts] = newProduct;
    totalProducts++;

    printf("Producto registrado correctamente.\n");

    return 1;
}

void listProducts(void)
{
    if (totalProducts == 0)
    {
        printf("No hay productos registrados.\n");
        return;
    }

    printf("\nCódigo | Nombre | Categoría | Precio | Stock\n");

    for (int i = 0; i < totalProducts; i++)
    {
        printf("%d | %s | %s | %.2f | %d\n",
               products[i].code,
               products[i].name,
               products[i].category,
               products[i].price,
               products[i].quantity);
    }
}

int findProductByCode(int code)
{
    for (int i = 0; i < totalProducts; i++)
    {
        if (products[i].code == code)
        {
            return i;
        }
    }

    return -1;
}

int editProduct(void)
{
    int code, index;

    printf("Ingrese el código del producto a editar: ");
    scanf("%d", &code);
    clearBuffer();

    index = findProductByCode(code);

    if (index == -1)
    {
        printf("Error: producto no encontrado.\n");
        return 0;
    }

    printf("Ingrese el nuevo nombre: ");
    readText(products[index].name, sizeof(products[index].name));

    printf("Ingrese la nueva categoría: ");
    readText(products[index].category, sizeof(products[index].category));

    printf("Ingrese el nuevo precio: ");
    scanf("%f", &products[index].price);
    clearBuffer();

    printf("Ingrese la nueva cantidad: ");
    scanf("%d", &products[index].quantity);
    clearBuffer();

    printf("Producto actualizado correctamente.\n");

    return 1;
}

int deleteProduct(void)
{
    int code, index;

    printf("Ingrese el código del producto a eliminar: ");
    scanf("%d", &code);
    clearBuffer();

    index = findProductByCode(code);

    if (index == -1)
    {
        printf("Error: producto no encontrado.\n");
        return 0;
    }

    for (int i = index; i < totalProducts - 1; i++)
    {
        products[i] = products[i + 1];
    }

    totalProducts--;

    printf("Producto eliminado correctamente.\n");

    return 1;
}

int registerSale(void)
{
    int code, quantitySold, index;

    printf("Ingrese el código del producto: ");
    scanf("%d", &code);
    clearBuffer();

    index = findProductByCode(code);

    if (index == -1)
    {
        printf("Error: producto no encontrado.\n");
        return 0;
    }

    printf("Ingrese la cantidad a vender: ");
    scanf("%d", &quantitySold);
    clearBuffer();

    if (quantitySold <= 0)
    {
        printf("Error: la cantidad debe ser mayor que cero.\n");
        return 0;
    }

    if (quantitySold > products[index].quantity)
    {
        printf("Error: stock insuficiente. Disponible: %d\n",
               products[index].quantity);
        return 0;
    }

    products[index].quantity -= quantitySold;

    float total = products[index].price * quantitySold;

    printf("Venta realizada correctamente. Total: %.2f\n", total);
    printf("Nuevo stock: %d\n", products[index].quantity);

    return 1;
}

void sortProductsByPrice(void)
{
    for (int i = 0; i < totalProducts - 1; i++)
    {
        for (int j = 0; j < totalProducts - i - 1; j++)
        {
            if (products[j].price > products[j + 1].price)
            {
                Product temp = products[j];

                products[j] = products[j + 1];
                products[j + 1] = temp;
            }
        }
    }

    printf("Productos ordenados por precio correctamente.\n");
}