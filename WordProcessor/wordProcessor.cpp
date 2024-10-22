#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(const char *filename)
{
    FILE *fptr = fopen(filename, "w");
    if (fptr == NULL)
    {
        printf("Error creating file\n");
        return;
    }
    printf("File %s created successfully.\n", filename);
    fclose(fptr);
}

void readFile(const char *filename)
{
    FILE *fptr = fopen(filename, "r");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
    {
        // write a single character to the standard output eg terminal
        putchar(ch);
    }
    fclose(fptr);
}

void writeFile(const char *filename)
{
    FILE *fptr = fopen(filename, "a");
    if (fptr == NULL)
    {
        printf("Error opening file\n");
        return;
    }
    char text[256];
    printf("Enter text to write to file (hit Enter, type 'END' then Enter again to finish):\n");
    while (1)
    {
        if (fgets(text, sizeof(text), stdin) == NULL)
        {
            printf("Error reading input\n");
            break;
        }

        // Remove trailing newline character
        text[strcspn(text, "\n")] = 0;

        if (strcmp(text, "END") == 0)
        {
            break;
        }

        fputs(text, fptr);
        // Add newline back after writing text to file
        fputs("\n", fptr);
    }
    fclose(fptr);
}

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
    {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        // Clear newline char from buffer
        // getchar() function reads the next character from the standard input(stdin) and returns it as an unsigned char cast to an int
        getchar();

        switch (choice)
        {
        case 1:
            printf("Enter filename to create: ");
            scanf("%s", filename);
            getchar();
            createFile(filename);
            break;
        case 2:
            printf("Enter filename to read: ");
            scanf("%s", filename);
            getchar();
            readFile(filename);
            break;
        case 3:
            printf("Enter filename to write to: ");
            scanf("%s", filename);
            getchar();
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