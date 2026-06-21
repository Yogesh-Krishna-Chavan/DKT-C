// Count Occurrences of a Character (Case-Insensitive)

// Write a function to return number of occurances of given character in a string irrespective of case.

#include <stdio.h>
#include <ctype.h>

int countOccur(char str[], char ch)
{
    int i, count = 0;

    ch = tolower(ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(tolower(str[i]) == ch)
            count++;
    }

    return count;
}

int main()
{
    char str[100], ch;

    printf("Enter string: ");
    scanf("%s", str);

    printf("Enter character: ");
    scanf(" %c", &ch);

    printf("Count = %d\n", countOccur(str, ch));

    return 0;
}