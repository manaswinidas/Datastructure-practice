#include<stdio.h>
void main(int argc, char *argv[]){
    int a, b;
    a=atol(argv[1]);
    b=atol(argv[2]);
    printf("Value of a =%d and value of b=%d", a, b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nValue of a = %d and value of b = %d",a,b);
}