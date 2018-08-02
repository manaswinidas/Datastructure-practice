#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character:");
    scanf("%c", &a);
    if(a>=65&&a<=90||a>=97&&a<=122)
    printf("It is an alphabet");
    else
    printf("It is not an alphabet");
}