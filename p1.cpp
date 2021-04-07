#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[50], *p;

    printf("Enter a string: ");
    gets(str);
    p=str;

    while(*p)
    {
        *p++=toupper(*p);
    }

    printf("%s\n",str);

    p=str;

    while(*p)
    {
        *p++=tolower(*p);
    }

    printf("%s\n",str);

    return 0;
}
