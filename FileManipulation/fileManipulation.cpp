#include <stdio.h>
/*
ctype.h declares several functions that are useful for testing and mapping characters.

All the functions accepts int as a parameter, whose value must be EOF (end of file) or
representable as an unsigned char.

All the functions return non-zero (true) if the argument c satisfies the condition described,
and zero(false) if no
https://www.tutorialspoint.com/c_standard_library/ctype_h.htm
*/
#include <ctype.h>

int main()
{
    FILE *fptr;
    char filename[100];
    char ch;
    int words = 0, lines = 0, characters = 0;

    printf("Enter the filename (eg test.txt): ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");

    if (fptr == NULL)
    {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    // EOF means end of file
    /* fgetc() gets the next character (an unsigned char) from the specified stream and advances the position indicator for the stream by one character */
    while ((ch = fgetc(fptr)) != EOF)
    {
        characters++;
        if (ch == ' ' || ch == '\n')
        {
        }

        if (ch == '\n')
        {
            lines++;
        }
    }
    fclose(fptr);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}