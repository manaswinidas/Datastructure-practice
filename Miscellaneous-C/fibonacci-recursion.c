#include<stdio.h>
void fibonacci(int n);
void main()
{
    int n;
    printf("Enter the number upto which you want to print the Fibonacci series:");
    scanf("%d", &n);
    fibonacci(n);
}
void fibonacci(int n)
{
    if (n<2)
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}