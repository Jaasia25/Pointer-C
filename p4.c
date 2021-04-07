#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], *p="Stop";

    do
        {
        printf("Enter a string: ");
        gets(s);
        }

    while(strcmp(p,s));

    return 0;
}

