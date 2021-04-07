#include<stdio.h>
#include<string.h>

int main()
{
    char s1[]= "Pointers are fun to use";
    char s2[80], *p1, *p2;

    p1= s1+ strlen(s1)-1;

    p2=s2;

    while(p1>=s1)
        *p2++=*p1--;

    *p2='\0';

    printf("%s \n%s",s1,s2);

    return 0;

}
