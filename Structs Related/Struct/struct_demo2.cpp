#include <stdio.h>
// Needed to modify the struct name since arrays can't be directly assigned
#include <string.h>

// Structure definition
struct Student
{
    char name[50];
    int age;
    float gpa;
};

int main()
{
    // Initialization
    struct Student s1 = {"John Doe", 20, 3.5};
    struct Student s2;
    // Directly assigning member
    // Need to use strcpy to modify name that is a char array
    strcpy(s2.name, "John Smith");
    s2.age = 22;
    s2.gpa = 3.8;
    // Access and modify
    printf("Before modification:\n");
    printf("Name: %s, Age: %d, GPA: %.2f\n", s1.name, s1.age, s1.gpa);
    printf("Name: %s, Age: %d, GPA: %.2f\n", s2.name, s2.age, s2.gpa);
    // Modify age directly
    s1.age += 1;
    printf("\nAfter modifying age of s1:\n");
    printf("Name: %s, Age: %d, GPA: %.2f\n", s1.name, s1.age, s1.gpa);
    // Using pointers
    struct Student *ptr = &s1;
    // Modifying GPA using pointer
    ptr->gpa = 3.7;
    printf("\nAfter modifying GPA of s1 through pointer:\n");
    printf("Name: %s, Age: %d, GPA: %.2f\n", ptr->name, ptr->age, ptr->gpa);
    return 0;
}

/*
Initializing Structures: Structures can be initialized at the time of declaration or by assigning values to individual members.

Accessing Structure Members: The dot operator (.) is used to access and modify structure members.

Pointer to Structure: Pointers can reference structures, and members can be accessed using the arrow operator (->).

*/