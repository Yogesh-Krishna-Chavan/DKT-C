// Write functions to accept and print one student record

#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

void accept(struct Student *s)
{
    printf("Enter Roll No: ");
    scanf("%d", &s->rollno);

    printf("Enter Name: ");
    scanf("%s", s->name);

    printf("Enter Marks: ");
    scanf("%f", &s->marks);
}

void print(struct Student s)
{
    printf("\nRoll No : %d\n", s.rollno);
    printf("Name    : %s\n", s.name);
    printf("Marks   : %.2f\n", s.marks);
}

int main()
{
    struct Student s;

    accept(&s);
    print(s);

    return 0;
}