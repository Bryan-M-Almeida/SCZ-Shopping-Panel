#include <stdio.h>
#include "product.h"
#include "file.h"

int saveProducts(void)
{
    FILE *file = fopen(FILE_PATH, "w");

    if (file == NULL)
    {
        printf("Error: no fue posible abrir el archivo para guardar los datos.\n");
        return 0;
    }

    for (int i = 0; i < totalProducts; i++)
    {
        fprintf(file, "%d;%s;%s;%.2f;%d\n",
                products[i].code,
                products[i].name,
                products[i].category,
                products[i].price,
                products[i].quantity);
    }

    fclose(file);

    printf("Datos guardados correctamente en %s.\n", FILE_PATH);

    return 1;
}

int loadProducts(void)
{
    FILE *file = fopen(FILE_PATH, "r");

    if (file == NULL)
    {
        printf("Archivo no encontrado. Iniciando con una lista vacía.\n");
        totalProducts = 0;
        return 0;
    }

    totalProducts = 0;

    while (totalProducts < MAX_PRODUCTS &&
           fscanf(file, "%d;%49[^;];%29[^;];%f;%d\n",
                  &products[totalProducts].code,
                  products[totalProducts].name,
                  products[totalProducts].category,
                  &products[totalProducts].price,
                  &products[totalProducts].quantity) == 5)
    {
        totalProducts++;
    }

    fclose(file);

    printf("Datos cargados correctamente. Total de productos: %d\n", totalProducts);

    return 1;
}