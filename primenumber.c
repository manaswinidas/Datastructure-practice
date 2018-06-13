#include<stdio.h>
void main()
{
    int n,nf,i;
    printf("Enter the number you want to check for prime number:");
    scanf("%d",&n);
    for(i=1;i<=n;++i)
    {
        if(n%i==0)
        nf++;
    }
    if(n==1)
    printf("This is not prime nor a non-prime number");
    else if(nf==2)
    printf("This is a prime number");
    else
    printf("This is not a prime number");
}