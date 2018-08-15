#include<stdio.h>
void main(){
    int n,d,nd=0,s=0;
    printf("Enter a number:", n);
    scanf("%d",&n);
    while(n!=0){
        d=n%10;
        nd++;
        if(nd==1||nd==5)
          s=s+d;
        n=n/10;  
    }
    printf("Sum of first and last digits of a four-digit number= %d",s);
}