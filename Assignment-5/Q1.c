// Write a program to accept n integers in an array and search for a given element using pointers.

#include <stdio.h>

int main()
{
    int arr[100], n, key, i;
    int *ptr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    ptr = arr;

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) == key)
        {
            printf("Element Found at Position %d\n", i + 1);
            return 0;
        }
    }

    printf("Element Not Found\n");

    return 0;
}