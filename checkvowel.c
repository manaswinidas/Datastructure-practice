#include<stdio.h>
void main()
{
    char a;
    printf("Enter a character:");
    scanf("%c", &a);
    a=toupper(a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("It is a vowel");
    else
    printf("It is a consonant");
}