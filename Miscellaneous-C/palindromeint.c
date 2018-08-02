#include<stdio.h>
void main()
{
    int n,on,rev,d;
    printf("Enter an integer:");
    scanf("%d", &n);
    on=n;
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;
    }
    if(rev==on)
    printf("This is a Palindrome number");
    else
    printf("This is not a Palindrome number");
}