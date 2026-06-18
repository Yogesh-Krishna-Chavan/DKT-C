// Write a command line program to convert all vowels in a given string to uppercase.

#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    int i;

    for(i = 0; argv[1][i] != '\0'; i++)
    {
        char ch = argv[1][i];

        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            argv[1][i] = toupper(ch);
    }

    printf("%s\n", argv[1]);

    return 0;
}