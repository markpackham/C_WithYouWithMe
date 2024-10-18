#include <stdio.h>
#include <string.h>

struct Course
{
    char code[10];
    char title[100];
    int credits;
};

// Ever Student has some struct Courses
struct Student
{
    char name[50];
    int age;
    struct Course courses[5];
};

void displayStudent(struct Student stud)
{
    printf("Name: %s\n", stud.name);
    printf("Age: %d\n", stud.age);
    printf("Courses:\n");
    for (int i = 0; i < 5; i++)
    {
        // We do (i+1) for print purposes or it'd print "Course 0: "
        printf("Course %d: %s - %s (%d credits)\n", (i + 1), stud.courses[i].code, stud.courses[i].title, stud.courses[i].credits);
    }
}

int main()
{
    struct Student student =
        {
            "John Smith",
            25,
            {{"Eng101", "Learning English 101", 1},
             {"Fre101", "Learning French 101", 1},
             {"Mat101", "Learning Maths 101", 1},
             {"His101", "Learning History 101", 2},
             {"Geo101", "Learning Geography 101", 3}}};

    displayStudent(student);

    return 0;
}