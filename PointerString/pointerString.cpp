#include <stdio.h>

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
    gets(str1);
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    printf("\nCOMBINE 1st & 2nd STRING \n");

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("\nSTRING LENGTH \n");

    printf("Enter a string to find its length: ");
    gets(str1);
    printf("Length of a string: %d\n", stringLength(str1));

    return 0;
}