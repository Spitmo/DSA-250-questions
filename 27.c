#include<stdio.h>
int main()
{
    int a;
    printf("enter the week day: ");
    scanf("%d",&a);
    if(a>=1 && a<=7)
    {
        if(a==1)
        printf("monday");
        if(a==2)
        printf("tuesday");
        if(a==3)
        printf("wednesday");
        if(a==4)
        printf("thursday");
        if(a==5)
        printf("friday");
        if(a==6)
        printf("saturday");
        if(a==7)
        printf("sunday");
    }
    else
    printf("invalid number");
    return 0;
}
