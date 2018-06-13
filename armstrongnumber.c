#include<stdio.h>
void main()
{
    int n,on,rn,d;
    printf("Enter your number:");
    scanf("%d", &n);
    on=n;
    while(n>0)
    {
        d=n%10;
        rn=rn+d*d*d;
        n=n/10;
    }
    if(rn==on)
    printf("This is an Armstrong number");
    else
    printf("This is not an Armstrong number");
}