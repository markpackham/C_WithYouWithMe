#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod, remainder;
    float quot;

    // Input 2 ints from the user
    // Hit "Enter" each time
    printf("Enter 2 ints make the 1st larger than the 2nd: ");
    scanf("%d %d", &num1, &num2);

    // Perform math operations
    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    // Type casting for accurate division
    quot = (float)num1 / num2;
    remainder = num1 % num2;

    // Results
    printf("sum: %d\n", sum);
    printf("Difference: %d\n", diff);
    printf("Product: %d\n", prod);  
    printf("Quotient: %.2f\n", quot);
    printf("Remainder via modulus: %d\n", remainder);

    return 0;
}   