// Q.2 Insertion Sort in Descending Order

#include <stdio.h>

int main()
{
    int arr[100], n;
    int i, j, temp;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");

    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 1; i < n; i++)
    {
        temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] < temp)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = temp;
    }

    printf("Sorted Array (Descending):\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}