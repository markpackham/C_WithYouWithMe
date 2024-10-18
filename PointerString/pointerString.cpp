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

int main()
{
    char str1[100], str2[100];

    printf("Enter a string: ");
    gets(str1);
    reverseString(str1);
    printf("Reversed string: %s\n", str1);

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    concatenateStrings(str1, str2);
    printf("Concatenated string: %s\n", str1);

    printf("Enter a string to find its length: ");
    gets(str1);
    printf("Length of a string: %d\n", stringLength(str1));

    return 0;
}