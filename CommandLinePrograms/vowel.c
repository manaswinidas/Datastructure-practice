#include<stdio.h>
#include<string.h>
void main(int argc, char* argv[])
{
    char a;
    a=atol(argv[1]);
    a=toupper(a);
    if(a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
    printf("It is a vowel");
    else
    printf("It is a consonant");
}