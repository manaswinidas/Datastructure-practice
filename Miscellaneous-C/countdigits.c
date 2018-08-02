#include<stdio.h>
void main(){
    int n,d,count=0;
    scanf("%d", &n);
    while(n>0){
        d = n%10;
        count++;
        n=n/10;
    }
    printf("Number of digits=%d", count);
}