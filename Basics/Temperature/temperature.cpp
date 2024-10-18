#include <stdio.h>

int main()
{
    float celsius, fahrenheit, kelvin;
    int choice;

    printf("Temp Convert menu:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2) ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        kelvin = celsius + 273.15;
        printf("%.2f Celsius is %.2f Fahrenheit\n", celsius, fahrenheit);
        printf("%.2f Celsius is %.2f Kelvin\n", celsius, kelvin);
    }
    else if (choice == 2)
    {
        printf("Enter temperature in Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5/9;
        kelvin = ((fahrenheit - 32) * 5/9) + 273.15;
        printf("%.2f Fahrenheit is %.2f Celsius\n", fahrenheit, celsius);
        printf("%.2f Fahrenheit is %.2f Kelvin\n", fahrenheit, kelvin);
    }
    else
    {
        printf("%d was your choice!\n",choice);
        printf("Invalid choice! please enter 1 or 2 (although real men use Kelvin)");
    }

    return 0;
}