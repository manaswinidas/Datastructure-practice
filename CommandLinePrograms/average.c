#include<stdio.h>
void main(int argc, char *argv[]){
    float a,b;
    float avg;
    a = atol(argv[1]);
    b = atol(argv[2]);
    avg = (a+b)/2;
    printf("Average=%f", avg);
}