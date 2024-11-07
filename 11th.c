#include<stdio.h>
int main()
{
    int b,e;
    int result=1.0;
    printf("enter a base number and exponent: ");
    scanf("%d%d",&b,&e);
    while(e!=0)
    {
        result*=b;
        --e;
    }
    printf("answer=%d",result);
    return 0;
}
