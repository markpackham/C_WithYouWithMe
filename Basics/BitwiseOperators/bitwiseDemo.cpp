#include <stdio.h>

// Bitwise Operators
int main()
{
    unsigned char a = 5;
    unsigned char b = 3;

    // Bitwise AND (&)
    // Outputs: 1 (binary 00000001)
    printf("Bitwise AND: %d\n", a & b);

    // Bitwise OR (|)
    // Outputs: 7 (binary 00000111)
    printf("Bitwise AND: %d\n", a | b);

    // Bitwise XOR (^)
    // Outputs: 6 (binary 00000110)
    printf("Bitwise XOR: %d\n", a ^ b);

    // Bitwise NOT (~)
    // Outputs: 252 (binary 11111100)
    printf("Bitwise NOT of a: %d\n", ~a);

    // Left shift (<<)
    // Outputs: 10 (binary 00001010)
    printf("Left shift by 1 position: %d\n", a << 1);

    // Right shift (>>)
    // Outputs: 2 (binary 00000010)
    printf("Right shift by 1 position: %d\n", a >> 1);

    return 0;
}