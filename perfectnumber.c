#include<stdio.h>
void main(){
    int n,i,sum;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<n;i++){
        if(n%i==0)
         sum+=i;
    }
    if(sum==n)
       printf("%d is a perfect number", n);
    else 
       printf("%d is not a perfect number", n);
}