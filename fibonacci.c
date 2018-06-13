#include<stdio.h>
void main()
{
  int n, i, a, b ,c;
  printf("Enter the number of terms upto which you want to print Fibbonacci series:");
  scanf("%d", &n);
    a=0;
    b=1;
    printf("%d, %d", a, b);
  for (i=3;i<=n;++i)
  {
      c=a+b;
      printf(", %d", c);
      a=b;
      b=c;
  }
}