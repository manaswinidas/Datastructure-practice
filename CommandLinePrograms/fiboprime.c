#include<stdio.h>
#include<math.h>
void fibonacci(int);
void prime(int);
void main(int argc, char *argv[]){
    int n;
      n=atol(argv[1]);
      if(n%2==0)
         {
             n=n/2;
             prime(n);
         }
      else
      {
          n=ceil(n/2);
          fibonacci(n);
      }   
}
void fibonacci(int n){
    int a=1,b=1,i,c;
    for(i=3;i<=n;i++){
    c=a+b;
    printf("%d",c);
    a=b;
    b=c;
    }
} 
void prime(int n){
    int i,nf=0,j;
    for(i=2;i<=n;i++){      
      for(j=1;j<=i;j++){
        if(i%j==0){
            nf++;
        }
        if(nf==2){
            printf("%d",i);
        }
}}}
