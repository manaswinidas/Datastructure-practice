#include<stdio.h>
void main(int argc, char *argv[]){
    int remainder,n,base=1;
    long int binary=0;
    n=atoi(argv[1]);
    while(n>0){
        remainder=n%2;
        binary=binary+remainder*base;
        n=n/2;
        base=base*10;
    }
    printf("Binary number=%d",binary);
}