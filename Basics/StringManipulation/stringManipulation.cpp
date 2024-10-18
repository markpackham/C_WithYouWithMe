#include <stdio.h>
#include <string.h>

int main()
{
    // Delcare and init string
    char str[20] = "Hello";

    // Get the length of the string
    int len = strlen(str);
    printf("Length of str: '%s' - %d\n", str, len);

    // Copy the string
    char dest[20];
    printf("dest starts off empty with 20 spaces before we copy to it -- %s \n", dest);
    strcpy(dest, str);
    printf("Copied str: %s\n", dest);

    // Concat strings
    strcat(dest, " World!");
    printf("Concatenated str: %s\n", dest);

    // Compare strings
    char str2[] = "Hello World!!!!!!!!!!!";
    printf("dest: %s - str2: %s\n", dest, str2);
    int cmp = strcmp(dest, str2);

    if (cmp < 0)
    {
        printf("dest is less than str2\n");
    }
    else if (cmp > 0)
    {
        printf("dest is greater than str2\n");
    }
    else
    {
        printf("dest is equal to str2\n");
    }

    return 0;
}