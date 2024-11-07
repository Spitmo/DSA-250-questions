#include<stdio.h>
int main()
{
    int a;
    printf("enter the month: ");
    scanf("%d",&a);
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12)
    printf("it have 31 days");
    else if(a==4||a==6||a==9||a==11)
    printf("it have 30 days");
    else if(a==2)
    printf("it has 28 days or 29 in leap year");
    else
    printf("enter a valid number");
    return 0;
}
