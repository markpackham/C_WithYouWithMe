#include <stdio.h>

int main()
{

    printf("For Loop: prints the first 10 natural numbers\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }

    printf("While loop: calculate factorials\n");
    int number;
    unsigned long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &number);

    int n = 1;
    while (n <= number)
    {
        factorial *= n;
        n++;
    }
    printf("Factorial of %d is %llu\n", number, factorial);

    printf("Do Loop: keeps asking for numbers until the user enters a negative\n");
    int c;

    do
    {
        printf("Enter a number: ");
        scanf("%d", &c);
    } while (c >= 0);

    printf("Why you gotta be so negative man?\n");

    return 0;
}