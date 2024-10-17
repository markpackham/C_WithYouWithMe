#include <stdio.h>
#include <stdlib.h>

/*
free deallocates the previously allocated memory, making it available for future use. 
It prevents memory leaks by ensuring that no allocated memory remains unused indefinitely.
*/

// DANGLING POINTER DANGER!!!!!

/* Once you have deallocated memory using free, the pointer ptr becomes a dangling pointer. Dereferencing it after free would cause undefined behavior. It's a good practice to set the pointer to NULL after freeing it. */

int main()
{
    // Allocates memory
    int *ptr = (int *)malloc(10 * sizeof(int)); 
    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Use the allocated memory
    // Deallocating the memory
    free(ptr);
    return 0;
}