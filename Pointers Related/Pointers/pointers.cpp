#include <stdio.h>

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    // Pointer initialized to the start of the array
    int *ptr = array;
    // Output: 10
    printf("Initial value: %d\n", *ptr);
    // Move to next integer location
    ptr++;
    // Output: 20
    printf("After increment: %d\n", *ptr);
    // Move back to previous integer location
    ptr--;
    // Output: 10
    printf("After decrement: %d\n", *ptr);
    // Pointer arithmetic to access other elements
    // Output: 40
    printf("Third element: %d\n", *(ptr + 3));
    return 0;
}