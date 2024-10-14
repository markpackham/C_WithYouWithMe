#include <stdio.h>

// Calculator
int main()
{
    char oper;
    double num1, num2;

// Have to use %% for a % to show in printf
    printf("Enter an operation (+, -, *, /, %%): ");
    scanf("%c", &oper);
    printf("Enter 2 operands: ");
    scanf("%lf %lf", &num1, &num2);

    switch (oper)
    {
    case '+':
        printf("%.2lf + %.2lf = %.2lf", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.2lf - %.2lf = %.2lf", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.2lf * %.2lf = %.2lf", num1, num2, num1 * num2);
        break;
    case '/':
        if (num2 != 0)
        {
            printf("%.2lf / %.2lf = %.2lf", num1, num2, num1 / num2);
        }
        else
        {
            printf("Error trying to divide by zero");
        }
        break;
    case '%':
    // Modulus needs to use ints rather than doubles
        printf("%.2lf %% %.2lf = %.2lf", num1, num2, (int)num1 % (int)num2);
        break;
    }

    return 0;
}