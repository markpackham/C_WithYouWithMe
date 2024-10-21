#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int quantity;
    float price;
} Product;

void displayProduct(Product p)
{
    printf("Name: %s\n", p.name);
    printf("Quantity: %d\n", p.quantity);
    printf("Price: %.2f\n", p.price);
}

void addProduct(Product products[], int *count, char *name, int quantity, float price)
{
    strcpy(products[*count].name, name);
    products[*count].quantity = quantity;
    products[*count].price = price;
    (*count)++;
}

void updateProduct(Product *p, char *name, int quantity, float price)
{
    strcpy(p->name, name);
    p->quantity = quantity;
    p->price = price;
}

void deleteProduct(Product products[], int *count, int index)
{
    if (index < 0 || index >= *count)
    {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < *count - 1; i++)
    {
        products[i] = products[i + 1];
    }
    (*count)--;
}

int main()
{
    Product products[100];
    int count = 0;

    addProduct(products, &count, "Laptop", 10, 999.99);
    addProduct(products, &count, "Smartphone", 20, 499.99);

    printf("--------\n");
    printf("Products\n");
    printf("--------\n");
    for (int i = 0; i < count; i++)
    {
        displayProduct(products[i]);
    }

    updateProduct(&products[0], "Laptop", 8, 899.99);
    deleteProduct(products, &count, 1);

    printf("--------\n");
    printf("Updated Products\n");
    printf("--------\n");

    printf("Products:\n");
    for (int i = 0; i < count; i++)
    {
        displayProduct(products[i]);
    }

    return 0;
}