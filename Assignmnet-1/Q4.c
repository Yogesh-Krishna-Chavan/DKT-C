// Write a program to accept 5 digit number and check whether it is a numeric palindrome. (if reversed
// number is same as entered number it is called as palindrome)

#include <stdio.h>

int main()
{
    int num, temp, rev = 0, rem;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    temp = num;

    while(temp != 0)
    {
        rem = temp % 10;
        rev = rev * 10 + rem;
        temp = temp / 10;
    }

    if(num == rev)
        printf("Palindrome Number");
    else
        printf("Not a Palindrome Number");

    return 0;
}