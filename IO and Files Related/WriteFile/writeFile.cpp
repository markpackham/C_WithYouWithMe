#include <stdio.h>

int main()
{
    // Open file in write-binary mode
    FILE *fptr = fopen("data.bin", "wb");
    if (fptr == NULL)
    {
        perror("Error opening file");
        return -1;
    }

    int arr[5] = {1, 2, 3, 4, 5};
    // Write entire array to binary file
    size_t written = fwrite(arr, sizeof(int), 5, fptr);

    if (written != 5)
    {
        perror("Error writing to file");
    }

    // Close the file
    fclose(fptr);
    return 0;
}