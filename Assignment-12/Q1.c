// Q.1 Create an Array of Employees and Search Employee by EmpID or Name

#include <stdio.h>
#include <string.h>

struct Employee
{
    int empid;
    char name[30];
    float salary;
};

int main()
{
    struct Employee emp[5];
    int i, id, choice;
    char searchName[30];

    printf("Enter Employee Details:\n");

    for(i = 0; i < 5; i++)
    {
        printf("\nEmployee %d\n", i + 1);

        printf("Enter Emp ID: ");
        scanf("%d", &emp[i].empid);

        printf("Enter Name: ");
        scanf("%s", emp[i].name);

        printf("Enter Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nSearch By\n");
    printf("1. Emp ID\n");
    printf("2. Name\n");
    printf("Enter Choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Emp ID: ");
        scanf("%d", &id);

        for(i = 0; i < 5; i++)
        {
            if(emp[i].empid == id)
            {
                printf("\nEmployee Found\n");
                printf("ID : %d\n", emp[i].empid);
                printf("Name : %s\n", emp[i].name);
                printf("Salary : %.2f\n", emp[i].salary);
                return 0;
            }
        }
    }
    else if(choice == 2)
    {
        printf("Enter Name: ");
        scanf("%s", searchName);

        for(i = 0; i < 5; i++)
        {
            if(strcmp(emp[i].name, searchName) == 0)
            {
                printf("\nEmployee Found\n");
                printf("ID : %d\n", emp[i].empid);
                printf("Name : %s\n", emp[i].name);
                printf("Salary : %.2f\n", emp[i].salary);
                return 0;
            }
        }
    }

    printf("Employee Not Found\n");

    return 0;
}