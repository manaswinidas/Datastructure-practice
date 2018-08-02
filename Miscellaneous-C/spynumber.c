// A spy number is a number where sum of digits is equal to the product of digits of the number
#include<stdio.h>
void main(){
    int n,on,s=0,p=1,d;
    scanf("%d",&n);
    on = n;
    while(n>0){
        d=n%10;
        s=s+d;
        p=p*d;
        n=n/10;
    }
    if(p==s)
      printf("%d is a spy number", on);
    else
      printf("%d is not a spy number", on);   
}