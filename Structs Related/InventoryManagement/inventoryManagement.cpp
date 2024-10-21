#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int quantity;
    float price;
} Product;

void addProduct(Product products[], int *count, char *name, int quantity, float price)
{
    strcpy(products[*count].name, name);
    products[*count].quantity = quantity;
    products[*count].price = price;
    (*count)++;
}
