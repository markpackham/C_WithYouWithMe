#include <stdio.h>

int main()
{
    FILE *fptr;
    int arr[5] = {1, 2, 3, 4, 5};
    int readArr[5];

    fptr = fopen("data.bin", "wb");
    if (fptr == NULL)
    {
        printf("Error opening file. \n");
        return 1;
    }
    fwrite(arr, sizeof(int), 5, fptr);
    fclose(fptr);

    fptr = fopen("data.bin", "rb");
    if (fptr == NULL)
    {
        printf("Error opening file. \n");
        return 1;
    }
    fread(readArr, sizeof(int), 5, fptr);
    fclose(fptr);

    printf("Data read from binary file: \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", readArr[i]);
    }
    printf("\n");

    return 0;
}