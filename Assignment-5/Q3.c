// Write a program to accept n integers in an array and find the sum of all elements using pointers.

#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    int arr[100];
    int *ptr;

    // Step 1: Accept the size of the array
    printf("Enter size of array: ");
    scanf("%d", &n);

    // Step 2: Accept array elements from the user
    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Step 3 & 4: Initialize sum and point pointer to first element
    ptr = arr;

    // Step 5 & 6: Traverse array using pointer and add elements to sum
    for(i = 0; i < n; i++)
        sum = sum + *(ptr + i);

    // Step 7: Display the final sum
    printf("Sum = %d\n", sum);

    return 0;
}