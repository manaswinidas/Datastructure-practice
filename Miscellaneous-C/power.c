#include "stdio.h"
#include "math.h"
void main()
{
    int base,exp,result=0;
    printf("ENTER THE VALUE OF BASE\n");
    scanf("%d",&base);
    printf("ENTER THE VALUE OF POWER\n");
    scanf("%d",&exp);
    result=pow(base,exp);
    printf("RESULT=%d",result);
}