// Accept and Print Array of Student Structures

#include <stdio.h>

struct Student
{
    int rollno;
    char name[50];
    float marks;
};

void accept(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Roll No: ");
        scanf("%d", &s[i].rollno);

        printf("Enter Name: ");
        scanf("%s", s[i].name);

        printf("Enter Marks: ");
        scanf("%f", &s[i].marks);
    }
}

void print(struct Student s[], int n)
{
    int i;

    for(i = 0; i < n; i++)
    {
        printf("\nRoll No : %d", s[i].rollno);
        printf("\nName    : %s", s[i].name);
        printf("\nMarks   : %.2f\n", s[i].marks);
    }
}

int main()
{
    struct Student s[3];

    accept(s, 3);
    print(s, 3);

    return 0;
}