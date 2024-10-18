#include <stdio.h>
#include <stdlib.h>

/*
malloc (memory allocation) allocates a specified number of bytes and returns 
a pointer to the first byte of the allocated space. The content of the newly 
allocated memory is uninitialized (contains garbage values).
*/

int main()
{
    // Allocates memory for an array of 10 integers
    int *ptr = (int *)malloc(10 * sizeof(int)); 
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Initializing the allocated memory with sequential values
    for (int i = 0; i < 10; i++)
    {
        ptr[i] = i + 1;
    }

    // Printing the array
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", ptr[i]);
    }

    printf("\n");
    // Deallocating the memory
    free(ptr);
    return 0;
}