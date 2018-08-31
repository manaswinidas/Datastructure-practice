#include<stdio.h>
void main(int argc, char *argv[]){
    int d,n,s=0;
    n=atol(argv[1]);
    while(n>0){
        d=n%10;
        s=s+d;
        n=n/10;
    }
    printf("Sum of digits=%d",s);
}