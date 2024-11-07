#include<stdio.h>
int main()
{
    int y;
    printf("enter the year: ");
    scanf("%d",&y);
    if (y%4==0 && y%400==0||y%100!=0)
    {
        printf("its a leap year");
    }
    else
    printf("its not a leap year");
    return 0;
}                                                                                                                                                                     
