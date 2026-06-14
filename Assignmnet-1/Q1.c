// Write a program to accept two numbers and display division of the two numbers. Check divide by zero error. If divider is zero then display appropriate error message.

#include <stdio.h>

int main()
{
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if(num2 == 0)
    {
        printf("Error: Division by zero is not allowed.\n");
    }
    else
    {
        result = num1 / num2;
        printf("Division = %.2f\n", result);
    }

    return 0;
}