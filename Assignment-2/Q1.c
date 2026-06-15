// Write function to check whether given year is leap or not. Write another function to print number of
// days in given month.

#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
        return 1;
    return 0;
}

int daysInMonth(int month, int year)
{
    switch(month)
    {
        case 1: case 3: case 5: case 7:
        case 8: case 10: case 12:
            return 31;

        case 4: case 6: case 9: case 11:
            return 30;

        case 2:
            if(isLeapYear(year))
                return 29;
            else
                return 28;

        default:
            return -1;
    }
}

int main()
{
    int year, month;

    printf("Enter year: ");
    scanf("%d", &year);

    if(isLeapYear(year))
        printf("%d is a Leap Year\n", year);
    else
        printf("%d is not a Leap Year\n", year);

    printf("Enter month (1-12): ");
    scanf("%d", &month);

    printf("Days = %d\n", daysInMonth(month, year));

    return 0;
}