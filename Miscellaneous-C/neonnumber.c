// A number is called a neon number if sum of digits of square of a number is equal to the number itself.
#include<stdio.h>
void main(){
    int n,on,sq,d,s=0;
    scanf("%d",&n);
    on=n;
    sq=n*n;
    while(sq!=0){
        d=sq%10;
        s=s+d;
        sq=sq/10;
    }
    if(on==s)
       printf("%d is a neon number", on);
    else
       printf("%d is not a neon number", on);   
}