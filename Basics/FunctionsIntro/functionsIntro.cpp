#include <stdio.h>

// Return the bigger number
int max(int a, int b)
{
    // Ternary operator in use 
    return (a > b) ? a : b;
}

int main()
{
    int num1, num2;
    printf("Enter 2 ints: ");
    scanf("%d %d", &num1, &num2);

    printf("Max is: %d\n", max(num1, num2));

    return 0;
}