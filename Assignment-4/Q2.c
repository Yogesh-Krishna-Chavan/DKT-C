// Write two different functions to find maximum and minimum of the array elements.

#include <stdio.h>

int maximum(int arr[], int size)
{
    int max = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

int minimum(int arr[], int size)
{
    int min = arr[0];

    for(int i = 1; i < size; i++)
    {
        if(arr[i] < min)
            min = arr[i];
    }

    return min;
}

int main()
{
    int arr[5] = {10, 25, 5, 40, 15};

    printf("Maximum = %d\n", maximum(arr, 5));
    printf("Minimum = %d\n", minimum(arr, 5));

    return 0;
}