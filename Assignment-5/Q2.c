// Write a program to accept elements in an array and count the number of even and odd elements using pointers.

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int even = 0, odd = 0;
    int *ptr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    ptr = arr;

    for(i = 0; i < n; i++)
    {
        if(*(ptr + i) % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d\n", odd);

    return 0;
}