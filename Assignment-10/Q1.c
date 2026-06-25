//Read a file character by character and count uppercase, lowercase, digits, and special characters

#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;
    int upper = 0, lower = 0, digit = 0, special = 0;

    fp = fopen("data.txt", "r");

    if(fp == NULL)
    {
        printf("File not found!");
        return 0;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        if(ch >= 'A' && ch <= 'Z')
            upper++;
        else if(ch >= 'a' && ch <= 'z')
            lower++;
        else if(ch >= '0' && ch <= '9')
            digit++;
        else
            special++;
    }

    fclose(fp);

    printf("Uppercase = %d\n", upper);
    printf("Lowercase = %d\n", lower);
    printf("Digits    = %d\n", digit);
    printf("Special   = %d\n", special);

    return 0;
}