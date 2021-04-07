#include<stdio.h>
#include<string.h>

int main()
{
    char s[100], *p;
    int i,count=0;

    printf("Enter a string: ");
    gets(s);

    p=s;

    while(*p)
    {
       if(*p==' ')
        break;

        count++;
       *p++;
    }

    for(i=count+1;i<=strlen(s);i++)
        printf("%c",s[i]);

    return 0;
}
