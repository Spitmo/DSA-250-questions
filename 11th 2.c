#include<stdio.h>
#include<math.h>
int main()
{
    int b,e,r;
    printf("enter a base number and exponent: ");
    scanf("%d%d",&b,&e);
    r=pow(b,e);
    printf("%d^%d=%d",b,e,r);
    return 0;
}
