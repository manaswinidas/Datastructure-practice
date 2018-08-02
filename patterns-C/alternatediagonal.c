#include<stdio.h>
void main(){
    int a[100][100], i, j, n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for(i=0;i<n;++i){
        for(j=0;j<n;j++){
            if(i+j==n-1){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
}