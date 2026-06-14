// Write a program to create four function calculator. Four functions are +, -, *, /

#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op)
    {
        case '+':
            printf("Result = %.2f", a + b);
            break;

        case '-':
            printf("Result = %.2f", a - b);
            break;

        case '*':
            printf("Result = %.2f", a * b);
            break;

        case '/':
            if(b == 0)
                printf("Division by zero not allowed");
            else
                printf("Result = %.2f", a / b);
            break;

        default:
            printf("Invalid Operator");
    }

    return 0;
}