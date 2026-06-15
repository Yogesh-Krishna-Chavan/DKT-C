// Write a function to print prime numbers in the given range.

#include <stdio.h>

int isPrime(int num)
{
    int i;

    if(num <= 1)
        return 0;

    for(i = 2; i <= num / 2; i++)
    {
        if(num % i == 0)
            return 0;
    }

    return 1;
}

void printPrimeRange(int start, int end)
{
    int i;

    for(i = start; i <= end; i++)
    {
        if(isPrime(i))
            printf("%d ", i);
    }
}

int main()
{
    int start, end;

    printf("Enter start and end: ");
    scanf("%d%d", &start, &end);

    printPrimeRange(start, end);

    return 0;
}