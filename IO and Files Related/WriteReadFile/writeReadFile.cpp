#include <stdio.h>

int main()
{
    // Write to file
    FILE *write_ptr = fopen("example.txt", "w");
    if (write_ptr == NULL)
    {
        perror("Error opening file for writing");
        // Use -1 to return an error code
        return -1;
    }
    fprintf(write_ptr, "Hello, World!\n");
    fclose(write_ptr);

    // Append to file
    FILE *append_ptr = fopen("example.txt", "a");
    if (append_ptr == NULL)
    {
        perror("Error opening file for appending");
        return -1;
    }
    fprintf(append_ptr, "This line was appended.\n");
    fclose(append_ptr);

    // Read from file
    FILE *read_ptr = fopen("example.txt", "r");
    if (read_ptr == NULL)
    {
        perror("Error opening file for reading");
        return -1;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), read_ptr))
    {
        printf("%s", buffer);
    }
    fclose(read_ptr);

    // BINARY FILE
    // Write & read to binary file
    int data[] = {10, 20, 30, 40, 50};
    FILE *binary_write_ptr = fopen("binary.dat", "wb");
    if (binary_write_ptr == NULL)
    {
        perror("Error opening binary file for writing");
        return -1;
    }
    fwrite(data, sizeof(int), 5, binary_write_ptr);
    fclose(binary_write_ptr);

    int read_data[5];
    FILE *binary_read_ptr = fopen("binary.dat", "rb");
    if (binary_read_ptr == NULL)
    {
        perror("Error opening binary file for reading");
        return -1;
    }
    fread(read_data, sizeof(int), 5, binary_read_ptr);
    fclose(binary_read_ptr);

    printf("\nData read from binary file:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", read_data[i]);
    }

    printf("\n");

    return 0;
}

/* Data Representation: Unlike text files, binary files do not use delimiters like newline characters. Therefore, they preserve the exact byte representation of data.
 */

/*
 C provides several file modes for different types of operations:

"r" (Read): Opens the file for reading. The file must exist.

"w" (Write): Opens the file for writing. If the file exists, it is truncated to zero length. If the file does not exist, it is created.

"a" (Append): Opens the file for appending data at the end. If the file does not exist, it is created.

"r+" (Read/Write): Opens the file for both reading and writing. The file must exist.

"w+" (Write/Read): Opens the file for both reading and writing. If the file exists, it is truncated. If the file does not exist, it is created.

"a+" (Append/Read): Opens the file for both reading and appending. If the file does not exist, it is created.

*/