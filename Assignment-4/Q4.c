// Write a function to reverse an array.

#include <stdio.h>

void reverseArray(int arr[], int size)
{
    int temp;

    for(int i = 0; i < size / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1 - i] = temp;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);

    reverseArray(arr, size);

    printf("Reversed Array: ");

    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}