#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    int age;
    float gpa;
} Student;

void displayStudent(Student s)
{
    printf("Name: %s Age: %d Grade Point Average: %.2f\n", s.name, s.age, s.gpa);
}

void addStudent(Student students[], int *count, char *name, int age, float gpa)
{
    strcpy(students[*count].name, name);
    students[*count].age = age;
    students[*count].gpa = gpa;
    (*count)++;
}

void updateStudent(Student *s, char *name, int age, float gpa)
{
    strcpy(s->name, name);
    s->age = age;
    s->gpa = gpa;
}

void deleteStudent(Student students[], int *count, int index)
{
    if (index < 0 || index >= *count)
    {
        printf("Invalid index\n");
        return;
    }

    for (int i = index; i < *count - 1; i++)
    {
        students[i] = students[i + 1];
    }
    (*count)--;
}

int main()
{
    Student students[100];
    int count = 0;

    addStudent(students, &count, "John Smith", 20, 3.5);
    addStudent(students, &count, "Jane Smith", 22, 1.1);

    printf("Students:\n");
    for (int i = 0; i < count; i++)
    {
        displayStudent(students[i]);
    }

    updateStudent(&students[0], "John Smith", 21, 4.5);
    deleteStudent(students, &count, 1);

    printf("-------");
    printf("\nUpdated Students:\n");
    printf("-------\n");
    for (int i = 0; i < count; i++)
    {
        displayStudent(students[i]);
    }

    return 0;
}