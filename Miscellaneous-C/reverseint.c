#include<stdio.h>
void main()
{
    int n,rev,d;
    printf("Enter an integer:");
    scanf("%d", &n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    printf("Reverse number:%d", rev);
}