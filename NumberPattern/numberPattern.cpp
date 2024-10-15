#include <stdio.h>

int main()
{

    int rows;
    int total;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i; k++)
        {
            total += k;
            printf("%d", k);
        }
        printf("\n");
    }
    printf("Total = %d", total);

    return 0;
}
