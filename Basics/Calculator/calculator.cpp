#include <stdio.h>
// need fmod to get remainder of double division
#include <math.h>

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
    // fmod() needed so % can work with doubles
        printf("%.2lf %% %.2lf = %.2lf", num1, num2, fmod(num1, num2));
        break;
    }

    return 0;
}