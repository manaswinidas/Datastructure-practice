#include<stdio.h>
void main(int argc, char *argv[]){
    int a,b,hcf,lcm,i;
    a = atol(argv[1]);
    b = atol(argv[2]);
    for(i=1;i<=a;i++){
        if(a%i==0&&b%i==0)
           hcf=i;
    }
    lcm=(a*b)/hcf;
printf("HCF=%d and LCM=%d", hcf, lcm);
}