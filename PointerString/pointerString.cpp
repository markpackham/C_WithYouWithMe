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

int main()
{
    char str1[100], str2[100];

    printf("Enter a string: ");
    gets(str1);
    reverseString(str1);
    printf("Reversed string: %s\n", str1);
    // gets(str2);
    // concatenateStrings(str1, str2);
    // printf("Concatenated string: %s\n", str1);

    return 0;
}