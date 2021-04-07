#include<stdio.h>
#include<string.h>

int main()
{
    char *p1="One", *p2="Two", *p3="Three";

    printf(p1+p2+p3);
    printf("\n");
    printf(p2,p3,p1);
    printf("\n");
    printf(p3,p1,p2);
    printf("\n");
    printf(p1,p3,p2);
    printf("\n");
    printf(p2,p1,p3);
    printf("\n");
    printf(p3,p2,p1);
    printf("\n");
}
