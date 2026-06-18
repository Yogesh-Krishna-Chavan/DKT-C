// Write command line program to check if a string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int i, len, flag = 1;

    len = strlen(argv[1]);

    for(i = 0; i < len / 2; i++)
    {
        if(argv[1][i] != argv[1][len - 1 - i])
        {
            flag = 0;
            break;
        }
    }

    if(flag)
        printf("%s is palindrome\n", argv[1]);
    else
        printf("%s is not palindrome\n", argv[1]);

    return 0;
}