//Write a function to implement four function calculator. Function would take operands and operator as
//arguments and returns result.

#include <stdio.h>

float calculator(float a, float b, char op)
{
    switch(op)
    {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        default:
            printf("Invalid Operator\n");
            return 0;
    }
}

int main()
{
    float num1, num2, result;
    char op;

    printf("Enter expression (a + b): ");
    scanf("%f %c %f", &num1, &op, &num2);

    result = calculator(num1, num2, op);

    printf("Result = %.2f\n", result);

    return 0;
}