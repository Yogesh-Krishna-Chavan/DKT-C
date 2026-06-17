// In above program, division may fail if denominator is zero. Use global variable as an error flag to avoid
// this problem.

#include <stdio.h>

int errorFlag = 0;

float calculator(float a, float b, char op)
{
    switch(op)
    {
        case '+':
            return a + b;

        case '-':
            return a - b;

        case '*':
            return a * b;

        case '/':
            if(b == 0)
            {
                errorFlag = 1;
                return 0;
            }
            return a / b;

        default:
            errorFlag = 1;
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

    if(errorFlag)
        printf("Error: Division by zero or invalid operator\n");
    else
        printf("Result = %.2f\n", result);

    return 0;
}