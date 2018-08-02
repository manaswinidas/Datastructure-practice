#include<stdio.h>
#include<string.h>
void main()
{
 char str[100], rev[100];
 int len,i,j=0;
 printf("Enter a string:");
 gets(str);
 len = strlen(str);
 for(i=len-1;i>=0;--i)
 {
     rev[j++]=str[i];
 }
 printf("Reverse of %s is %s", str, rev);
}