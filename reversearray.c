#include<stdio.h>
void main()
{
int arr[50], n, i;
printf("Enter the number of elements:");
scanf("%d",&n);
printf("Enter the elements:");
for(i=0;i<n;++i)
{
 scanf("%d",&arr[i]);
}
printf("The elements in reverse order:");
for(i=n-1;i>=0;--i)
{
 printf("%d\t",arr[i]);
}
} 
