//Allocate memory dynamically for a 2D array

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, r, c;
    int **arr;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    arr = (int **)malloc(r * sizeof(int *));

    for(i = 0; i < r; i++)
        arr[i] = (int *)malloc(c * sizeof(int));

    printf("Enter elements:\n");

    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &arr[i][j]);

    printf("\nMatrix:\n");

    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
            printf("%4d", arr[i][j]);

        printf("\n");
    }

    for(i = 0; i < r; i++)
        free(arr[i]);

    free(arr);

    return 0;
}