// Command Line Calculator

// Write a program to accept two operands and operator as command line arguments. Perform the
// operation and print result. (Also do error check if arguments are not passed correctly)

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b;

    if(argc != 4)
    {
        printf("Pass cmd line args correctly\n");
        return 0;
    }

    a = atoi(argv[1]);
    b = atoi(argv[3]);

    switch(argv[2][0])
    {
        case '+':
            printf("Result = %d\n", a + b);
            break;

        case '-':
            printf("Result = %d\n", a - b);
            break;

        case '*':
            printf("Result = %d\n", a * b);
            break;

        case '/':
            printf("Result = %d\n", a / b);
            break;

        default:
            printf("Invalid Operator\n");
    }

    return 0;
}