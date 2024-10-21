#include <stdio.h>
#include <string.h>

// Union definition (they're like Structs but share 1 physical memory location)
// Like a parking space it can hold a car or motorbike BUT NOT at the same time
// Can store multiple data types but only one at a time
union Data
{
    int i;
    float f;
    char str[20];
};

int main()
{
    // Declaration
    union Data data;

    // Init & access union members
    data.i = 10;

    printf("Stored integer: data.i = %d\n", data.i);

    data.f = 220.5;
    printf("Stored float: data.f = %.2f\n", data.f);

    strcpy(data.str, "C Programming");
    printf("Stored string: data.str = %s\n", data.str);

    // Demonstrate that only one member holds value at a time so you can't ram an int into a float
    data.i = 50;
    printf("\nAfter modifying data.i to 50:\n");
    printf("data.i: %d\n", data.i);
    // Invalid since union is now storing an integer
    printf("data.f: %.2f\n", data.f);
    // Invalid since union is now storing an integer
    printf("data.str: %s\n", data.str);

    return 0;
}

/*
Definition and Declaration: Unions are defined using the union keyword, and they allow different data types to occupy the same memory location.

Initialization and Access: You can initialize and access union members using the dot operator. However, remember that only one member can be valid at a time.

Shared Memory: All members of a union share the same memory space, so changing one member’s value affects all others.
*/