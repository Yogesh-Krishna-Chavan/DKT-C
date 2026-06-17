// Write a program to accept marks of five subjects, calculate its average.

#include <stdio.h>

int main()
{
    int marks[5];
    int sum = 0;
    float avg;

    printf("Enter marks of 5 subjects:\n");

    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &marks[i]);
        sum += marks[i];
    }

    avg = sum / 5.0;

    printf("Average = %.2f\n", avg);

    return 0;
}