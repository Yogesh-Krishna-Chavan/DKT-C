// Write a program to allocate memory for 1D array at runtime to store marks(float) of 5 students. Accept
// marks from user and print on console.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *marks;
    int i;

    marks = (float *)malloc(5 * sizeof(float));

    printf("Enter marks of 5 students:\n");

    for(i = 0; i < 5; i++)
        scanf("%f", &marks[i]);

    printf("\nMarks are:\n");

    for(i = 0; i < 5; i++)
        printf("%.2f\n", marks[i]);

    free(marks);

    return 0;
}