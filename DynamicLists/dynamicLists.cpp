#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = NULL;
    int size = 0;
    int choice, element, index;

    while (1) {
        printf("1. Add element\n");
        printf("2. Remove element\n");
        printf("3. Update element\n");
        printf("4. Print elements\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
            printf("Enter an element to add: ");
            scanf("%d", &element);
            addElement(&array, &size, element);
            break;
            case 2:
            printf("Add index of element to remove");
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