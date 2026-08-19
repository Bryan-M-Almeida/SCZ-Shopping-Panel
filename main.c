#include <stdio.h>
#include <stdbool.h>
#include "product.h"
#include "file.h"

int main(void)
{
    bool running = true;
    int option;

    loadProducts();

    do
    {
        printf("\n================================\n");
        printf(" SISTEMA DE GESTIÓN DE INVENTARIO\n");
        printf("================================\n");
        printf("1. Registrar producto\n");
        printf("2. Listar productos\n");
        printf("3. Buscar producto\n");
        printf("4. Editar producto\n");
        printf("5. Eliminar producto\n");
        printf("6. Registrar venta\n");
        printf("7. Ordenar productos\n");
        printf("8. Guardar datos\n");
        printf("0. Salir\n");
        printf("Seleccione una opción: ");

        scanf("%d", &option);
        getchar();

        switch (option)
        {
        case 1:
        {
            registerProduct();
            break;
        }

        case 2:
        {
            listProducts();
            break;
        }

        case 3:
        {
            int code, index;

            printf("Ingrese el código del producto: ");
            scanf("%d", &code);
            getchar();

            index = findProductByCode(code);

            if (index == -1)
            {
                printf("Producto no encontrado.\n");
            }
            else
            {
                printf("Producto encontrado: %s | %s | %.2f | %d\n",
                       products[index].name,
                       products[index].category,
                       products[index].price,
                       products[index].quantity);
            }

            break;
        }

        case 4:
        {
            editProduct();
            break;
        }

        case 5:
        {
            deleteProduct();
            break;
        }

        case 6:
        {
            registerSale();
            break;
        }

        case 7:
        {
            sortProductsByPrice();
            break;
        }

        case 8:
        {
            saveProducts();
            break;
        }

        case 0:
        {
            printf("Guardando datos antes de salir...\n");
            saveProducts();

            printf("Cerrando el sistema...\n");

            running = false;
            break;
        }

        default:
        {
            printf("Opción inválida.\n");
            break;
        }
        }

    } while (running);

    return 0;
}