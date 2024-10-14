#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod;
    float quot;

    // Input 2 ints from the user
    // Hit "Enter" each time
    printf("Enter 2 ints: ");
    scanf("%d %d", &num1, &num2);

    // Perform math operations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    quot = (float)num1 / num2;

    // Results
    printf("sum: %d\n", sum);
}   