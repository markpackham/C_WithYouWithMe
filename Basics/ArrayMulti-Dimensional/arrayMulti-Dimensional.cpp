#include <stdio.h>>

int main()
{
    // Delcare & init of a 4x4 matrix
    int matrix[4][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        };

    // Modify elements changing top left to 10
    matrix[0][0] = 10;

    // Access elements
    int middleElement = matrix[1][1];
    printf("Middle element: %d\n", middleElement);

    // Iterate over the matrix to print all elements
    // Loop over rows
    for (int i = 0; i < 4; i++)
    {
        // Loop over columns
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        // Print new line after each row
        printf("\n");
    }

    int element33 = matrix[3][3];
    printf("Element 3x3: %d\n", element33);

    return 1;
}