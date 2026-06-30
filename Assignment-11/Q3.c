//Q.3 Bubble Sort with Flag (Best Case O(n))

#include <stdio.h>

int main()
{
    int arr[100];
    int n, i, j, temp, flag;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(i = 0; i < n - 1; i++)
    {
        flag = 0;

        for(j = 0; j < n - 1 - i; j++)
        {
            if(arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                flag = 1;
            }
        }

        if(flag == 0)
            break;
    }

    printf("Sorted Array:\n");

    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}