#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];

    printf("Enter a string: ");
    // gets() function is used to read a line from the standard input stream (stdin) and store it into the string pointed to by str
    // https://www.tutorialspoint.com/c_standard_library/c_function_gets.htm
    gets(str);

    int len = strlen(str);

    // Reverse the string
    for (int i = 0; i < len; i++)
    {
        rev[i] = str[len - i - 1];
    }

    // Add null character to end of string to show it's the end
    rev[len] = '\0';

    printf("Reversed string: %s\n", rev);

    if (strcmp(str, rev) == 0)
    {
        printf("The string is palindrome");
    }
    else
    {
        printf("The string is not a palindrome");
    }

    return 0;
}