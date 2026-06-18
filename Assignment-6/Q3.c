// Write a command line program to check if a given string is present in another string.

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    if(strstr(argv[2], argv[1]))
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}