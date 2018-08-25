#include<stdio.h>
void main(int argc, char *argv[]){
    int a,b,c;
    a=atol(argv[1]);
    b=atol(argv[2]);
    printf("Value of a=%d and value of b=%d", a, b);
    c=a;
    a=b;
    b=c;
    printf("\nValue of a=%d and value of b=%d", a, b);
}