#include <stdio.h>

int main(){
    // Write to file
    FILE *write_ptr = fopen("example.txt", "w");
    if(write_ptr == NULL){
        perror("Error opening file for writing");
        // Use -1 to return an error code
        return -1;
    }
    fprintf(write_ptr, "Hello, World!\n");
    fclose(write_ptr);

    // Append to file
    FILE *append_ptr = fopen("example.txt", "a");
    if (append_ptr == NULL){
        perror("Error opening file for appending");
        return -1;
    }
    fprintf(append_ptr, "This line was appended.\n");
    fclose(append_ptr);

    // Read from file
    FILE *read_ptr = fopen("example.txt", "r");
    if(read_ptr == NULL){
        perror("Error opening file for reading");
        return -1;
    }
    char buffer[256];
    while (fgets(buffer, sizeof(buffer), read_ptr)){
        printf("%s", buffer);
    }
    fclose(read_ptr);

    // BINARY FILE

    return 0;
}