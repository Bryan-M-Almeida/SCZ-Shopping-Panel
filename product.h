#ifndef PRODUCT_H
#define PRODUCT_H

#define MAX_PRODUCTS 100

typedef struct
{
    int code;
    char name[50];
    char category[30];
    float price;
    int quantity;

} Product;

extern Product products[MAX_PRODUCTS];

extern int totalProducts;

int registerProduct(void);

void listProducts(void);

int findProductByCode(int code);

int editProduct(void);

int deleteProduct(void);

int registerSale(void);

void sortProductsByPrice(void);

#endif