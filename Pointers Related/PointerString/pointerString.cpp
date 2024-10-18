#include <stdio.h>
#include <string.h>

void reverseString(char *str)
{
    char *end = str;
    while (*end)
    {
        end++;
    }
    end--;

    while (str < end)
    {
        char temp = *str;
        *str = *end;
        *end = temp;
        str++;
        end--;
    }
}

void concatenateStrings(char *dest, const char *src)
{
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

int stringLength(const char *str)
{
    int length = 0;
    while (*str)
    {
        length++;
        str++;
    }
    return length;
}

int main()
{
    char str1[100], str2[100];

    printf("REVERSE STRING \n");

    printf("Enter a string to reverse: ");

/*
The stdin (one in use), stdout, and stderr global constant pointers are standard streams for input, output, and error output.
By default, standard input is read from the keyboard, while standard output and standard error are printed to the screen.
https://learn.microsoft.com/en-us/cpp/c-runtime-library/stdin-stdout-stderr?view=msvc-170
*/
    fgets(str1, sizeof(str1), stdin);

    // Need #include <string.h> for strcspn()
    str1[strcspn(str1, "\n")] = '\0';
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    printf("\nCOMBINE 1st & 2nd STRING \n");

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("\nSTRING LENGTH \n");

    printf("Enter a string to find its length: ");
    gets(str1);
    printf("Length of a string: %d\n", stringLength(str1));

    return 0;
}