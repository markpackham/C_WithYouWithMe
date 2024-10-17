#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Using malloc to allocate memory
    int *arr1 = (int *)malloc(5 * sizeof(int)); // Allocate memory for 5 integers

    if (arr1 == NULL)
    {
        printf("Memory allocation with malloc failed!\n");
        return 1;
    }

    // Initializing and printing the array allocated with malloc
    for (int i = 0; i < 5; i++)
    {
        arr1[i] = i + 1;
        printf("arr1[%d] = %d\n", i, arr1[i]);
    }

    // Deallocate memory with free
    free(arr1);

    // Using calloc to allocate memory
    // Allocate and initialize memory for 5 integers
    int *arr2 = (int *)calloc(5, sizeof(int));

    if (arr2 == NULL)
    {
        printf("Memory allocation with calloc failed!\n");
        return 1;
    }

    // Printing the array allocated with calloc (should be all zeros)
    for (int i = 0; i < 5; i++)
    {
        printf("arr2[%d] = %d\n", i, arr2[i]);
    }

    // Deallocate memory with free
    free(arr2);

    printf("Now you're 'free()' goodbye - random memory arr1 = %d\n", arr1);
    printf("Now you're 'free()' goodbye - random memory arr1[%d] = %d\n", arr1[0]);
    printf("Now you're 'free()' goodbye - random memory arr2 = %d\n", arr2);
    printf("Now you're 'free()' goodbye - random memory arr2[%d] = %d\n", arr2[0]);

    return 0;
}

// malloc: Allocates uninitialized memory. Useful when you don't need the memory to be initialized to zero.

// calloc: Allocates and initializes memory to zero. Useful when you need the memory to be zero-initialized.

// free: Frees the allocated memory to avoid memory leaks.

/* Memory Allocation is like renting chairs for a party. While malloc is like getting chairs but initially, they might be dirty. Then with calloc you get clean, ready-to-use chairs. Finally free is returning the chairs back to the rental shop. */