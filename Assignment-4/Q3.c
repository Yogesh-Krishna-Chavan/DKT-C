// Write a function to find mode of the array. (Mode is the value which occurs most frequently in a set of
// values)

#include <stdio.h>

int mode(int arr[], int n)
{
    int maxCount = 0;
    int modeValue = arr[0];

    for(int i = 0; i < n; i++)
    {
        int count = 1;

        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > maxCount)
        {
            maxCount = count;
            modeValue = arr[i];
        }
    }

    return modeValue;
}

int main()
{
    int arr[] = {2, 4, 2, 5, 2, 7, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Mode = %d\n", mode(arr, n));

    return 0;
}