#include <stdio.h>

// Defining a structure with bit-fields
// You limit the amount of space a field can hold
struct
{
    // 3 bits for age (0 to 7)
    unsigned int age : 3;
    // 4 bits for grade (0 to 15)
    unsigned int grade : 4;
    // 9 bits for id (0 to 511)
    unsigned int id : 9;
} student1, student2;

int main()
{
    // Initializing bit-field values for student1
    student1.age = 5;
    student1.grade = 10;
    student1.id = 256;

    // Initializing bit-field values for student2
    student2.age = 7;
    student2.grade = 15;
    // This will overflow as only 9 bits are allocated
    student2.id = 999999999999;

    // Printing bit-field values
    printf("Student1 -> Age: %u, Grade: %u, ID: %u\n", student1.age, student1.grade, student1.id);
    // Overflow value will wrap around
    printf("Student2 -> Age: %u, Grade: %u, ID: %u\n", student2.age, student2.grade, student2.id);

    return 0;
}

/*
Bit-field Declaration: Bit-fields are declared within a structure using the colon (:) followed by the number of bits.

Memory Efficiency: Bit-fields allow for compact storage by specifying the exact number of bits needed for each field.

Setting and Getting Values: Bit-fields are accessed and modified using the dot operator, similar to regular structure members.

Overflow Considerations: Ensure the values assigned do not exceed the allocated bit-width to avoid unintended behavior.
*/