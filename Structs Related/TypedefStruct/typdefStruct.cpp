#include <stdio.h>
#include <string.h>

// Defining the structure and creating a typedef alias
// typedef existing_type new_type_name;
// handy if you're very lazy and not write things out in full
// you can use it for arrays, functions, ints & floats but it only makes sense if
// it makes your code more readable

typedef int unusedNumbersArray[];
unusedNumbersArray unusedNumA = {1, 2, 3, 4, 5};

typedef struct
{
    char name[50];
    int age;
    float gpa;
} Student;

int main()
{
    // Declaring and initializing Student variables
    // without the typedef alias we'd have to use struct every time eg "struct Student s1, s2;"
    Student s1 = {"John Doe", 20, 3.5};
    Student s2;
    // Setting values for s2
    strcpy(s2.name, "Jane Smith");
    s2.age = 22;
    s2.gpa = 3.8;
    // Printing student details
    printf("Student 1: Name = %s, Age = %d, GPA = %.2f\n", s1.name, s1.age, s1.gpa);
    printf("Student 2: Name = %s, Age = %d, GPA = %.2f\n", s2.name, s2.age, s2.gpa);
    printf("\nExample of unused num array: ");
    printf("%d", unusedNumA[0]);

    return 0;
}

// Why use typedef?

/*
Simplification: typedef simplifies type declarations, making your code easier to read and understand.

Improved Readability: By using intuitive aliases, you can make complex type definitions more comprehensible.

Maintainability: Changing the underlying type in one place (where typedef is defined) updates all uses of the alias, making the code easier to maintain.
*/