#include<stdio.h>
void main(int argc, char *argv[]){
    int n;
    n = atol(argv[1]);
    if(n%2==0)
        printf("%d is even",n);
    else
        printf("%d is odd",n);    
}