#include <stdio.h>
#include <stdlib.h>

void addElement(int **array, int *size, int element)
{
    *array = (int *)realloc(*array, (*size + 1) * sizeof(int));
    (*array)[*size] = element;
    (*size)++;
}

void removeElement(int **array, int *size, int index)
{
    if (index < 0 || index >= *size)
    {
        printf("Invalid index!\n");
        return;
    }

    for (int i = index; i < *size - 1; i++)
    {
        (*array)[i] = (*array)[i + 1];
    }

    *array = (int *)realloc(*array, (*size - 1) * sizeof(int));
    (*size)--;
}

void printArray(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main()
{
    int *array = NULL;
    int size = 0;
    int choice, element, index;

    while (1)
    {
        printf("1. Add integer\n");
        printf("2. Remove integer\n");
        printf("3. Print integers list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter an integer to add: ");
            scanf("%d", &element);
            addElement(&array, &size, element);
            break;
        case 2:
            printf("Add index of integer to remove: ");
            scanf("%d", &index);
            removeElement(&array, &size, index);
            break;
        case 3:
            printArray(array, size);
            break;
        case 4:
            free(array);
            return 0;
        default:
            printf("Invalid choice\n!\n");
        }
    }

    return 0;
}