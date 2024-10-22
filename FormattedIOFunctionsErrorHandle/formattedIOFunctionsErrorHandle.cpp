#include <stdio.h>

int main()
{
    // Open file in read mode
    FILE *file_pointer = fopen("input.txt", "r");

    if (file_pointer == NULL)
    {
        // Handle error while opening file
        fprintf(stderr, "Error opening file\n");
        return 1;
    }

    char name[50];
    int age;

    // Read data from file until end of file is reached or an error occurs
    while (fscanf(file_pointer, "%s %d", name, &age) == 2)
    {
        printf("Name: %s, Age: %d\n", name, age);
    }

    if (ferror(file_pointer))
    {
        // Handle error while reading from file
        fprintf(stderr, "Error reading file\n");
    }
    // Notify that end of file reached
    else if (feof(file_pointer))
    {
        printf("End of file reached\n");
    }

    // Close the file
    fclose(file_pointer);

    return 0;
}