// Write a function to perform division of two numbers. Return result via out parameter and return value
// indicates the error (due to zero denominator).

#include <stdio.h>

int divide(float num1, float num2, float *result)
{
    if(num2 == 0)
        return 1;

    *result = num1 / num2;
    return 0;
}

int main()
{
    float num1, num2, result;
    int status;

    printf("Enter two numbers: ");
    scanf("%f%f", &num1, &num2);

    status = divide(num1, num2, &result);

    if(status == 1)
        printf("Error: Division by zero\n");
    else
        printf("Division = %.2f\n", result);

    return 0;
}