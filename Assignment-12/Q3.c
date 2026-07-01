// Q.3 Binary Search Using Recursion

#include <stdio.h>

int binarySearch(int arr[], int low, int high, int key)
{
    int mid;

    if(low > high)
        return -1;

    mid = (low + high) / 2;

    if(arr[mid] == key)
        return mid;

    if(key < arr[mid])
        return binarySearch(arr, low, mid - 1, key);

    return binarySearch(arr, mid + 1, high, key);
}

int main()
{
    int arr[100], n, key;
    int i, pos;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter sorted array:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    pos = binarySearch(arr, 0, n - 1, key);

    if(pos == -1)
        printf("Element Not Found\n");
    else
        printf("Element Found at Position %d\n", pos + 1);

    return 0;
}