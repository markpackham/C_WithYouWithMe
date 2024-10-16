#include <stdio.h>
#include <string.h>

// Word guessed
void display(char word[], char guessed[], int len)
{
    for (int i = 0; i < len; i++)
    {
        if (guessed[i])
        {
            printf("%c ", word[i]);
        }
        else
        {
            printf("_ ");
        }
    }
}

int main()
{
    // The answer
    char word[] = "hangman";
    int len = strlen(word);
    char guessed[len];

    //  function is used to fill a contiguous block of memory with a specific value
    // https://www.tutorialspoint.com/c_standard_library/c_function_memset.htm
    memset(guessed, 0, sizeof(guessed));

    int attempts = 6;
    int correct = 0;

    printf("Welcome to Hangman!\n");
    while(attempts > 0 && correct < len){
        display(word, guessed, len);
    }

    return 0;
}