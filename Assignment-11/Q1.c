//Q.1 Binary Search on Descending Sorted Array

#include <stdio.h>

int main()
{
    int arr[100], n, key;
    int low, high, mid, i;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements in descending order:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == key)
        {
            printf("Element Found at Position %d\n", mid + 1);
            return 0;
        }
        else if(key > arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    printf("Element Not Found\n");

    return 0;
}