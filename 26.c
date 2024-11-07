#include<stdio.h>
int main()
{
    int a;
    printf("enter your number: ");
    scanf("%d",&a);
    if(a%5==0 && a%11==0)
    printf("number is divisble by both 5 and 11");
    else if(a%5==0 && a%11!=0)
    printf("number is only divisible by 5");
    else if(a%5!=0 && a%11==0)
    printf("number is only divisible by 7");
    else
    printf("number is not divsble by 5 and 11");
    return 0;
}
