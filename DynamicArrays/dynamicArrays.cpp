#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numElements;
    printf("Enter number of elements: ");
    scanf("%d", &numElements);

    int *array = (int *)malloc(numElements * sizeof(int));
    if (array == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    printf("Enter %d ints: ", numElements);
    for (int i = 0; i < numElements; i++)
    {
        scanf("%d", &array[i]);
    }

    printf("You have entered: ");
    for (int i = 0; i < numElements; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");

    free(array);

    return 0;
}