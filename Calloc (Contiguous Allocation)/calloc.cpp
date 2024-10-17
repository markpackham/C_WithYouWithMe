/* calloc (contiguous allocation) allocates memory for an array of elements, initializes them to zero,
and returns a pointer to the memory. It ensures that all bytes are set to zero. */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Allocates and initializes memory for an array
    int *ptr = (int *)calloc(10, sizeof(int)); 

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Printing the array to demonstrate that it's initialized to zero
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    // Deallocating the memory
    free(ptr);
    return 0;
}