#include<stdio.h>
#include<string.h>
void main()
{
    char str[100];
    int number, i, length;
    printf("Enter a String:");
    scanf("%s", &str);
    length=strlen(str);
    for(i=0;i<length;i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    number++;
    }
    printf("Number of vowels is %d and number of consonants is %d", number, length-number);
}