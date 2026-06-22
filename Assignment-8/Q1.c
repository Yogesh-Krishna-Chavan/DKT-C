// Write functions to calculate addition, subtraction and multiplication of two 3 X 3 matrix

#include <stdio.h>

void add(int A[3][3], int B[3][3])
{
    int i, j;

    printf("\nAddition:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%4d", A[i][j] + B[i][j]);

        printf("\n");
    }
}

void sub(int A[3][3], int B[3][3])
{
    int i, j;

    printf("\nSubtraction:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
            printf("%4d", A[i][j] - B[i][j]);

        printf("\n");
    }
}

void mul(int A[3][3], int B[3][3])
{
    int i, j, k, sum;

    printf("\nMultiplication:\n");

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            sum = 0;

            for(k = 0; k < 3; k++)
                sum += A[i][k] * B[k][j];

            printf("%4d", sum);
        }

        printf("\n");
    }
}

int main()
{
    int A[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int B[3][3] = {
        {9,8,7},
        {6,5,4},
        {3,2,1}
    };

    add(A, B);
    sub(A, B);
    mul(A, B);

    return 0;
}