#include <stdio.h>

/* Structures in C allow you to group different types of variables under a single name,
 making it easier to manage related data
A structure is a user-defined data type in C that allows you to combine
data items of different kinds
*/

// Always remember to declare the struct before use
struct Student
{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    struct Student s1 = {"John Doe", 20, 3.5};
    // Modifying members
    s1.age = 21;
    // Accessing members
    printf("Name: %s\n", s1.name);
    printf("Age: %d\n", s1.age);
    printf("GPA: %.2f\n", s1.gpa);

    printf("\nUsing a Pointer with a Struct to access members\n");

    // Pointer to the structure s1
    struct Student *ptr = &s1;
    // Accessing members using pointer
    ptr->gpa = 3.6;
    printf("Name: %s\n", ptr->name);
    printf("Age: %d\n", ptr->age);
    printf("GPA: %.2f\n", ptr->gpa);
    return 0;
}