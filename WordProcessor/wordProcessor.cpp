#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char filename[100];
    int choice;

    printf("Simple Text Editor\n");
    printf("1. Create new file\n");
    printf("2. Read a file\n");
    printf("3. Write to a file\n");
    printf("4. Exit\n");

    while (1)
        printf("Enter your choice: ");
    scanf("%d", &choice);
    // Clear newline char from buffer
    // getchar() function reads the next character from the standard input(stdin) and returns it as an unsigned char cast to an int
    getchar();

    {
        switch (choice)
        {
        case 1:
            printf("Enter filename to create: ");
            scanf("%d", &filename);
            getchar();
            createFile(filename);
            break;

        case 2:
            printf("Enter filename to read: ");
            scanf("%d", &filename);
            getchar();
            readFile(filename);
            break;

        case 3:
            printf("Enter filename to write to: ");
            scanf("%d", &filename);
            writeFile(filename);
            break;
        case 4:
            exit(0);
        default:
            printf("Invalid choice. Please try again.\n");
        }
    }

    return 0;
}