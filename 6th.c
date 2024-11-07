#include<stdio.h>
int main()
{
    float s,hra,other,gross;
    printf("enter your salary,hra,other allowence");
    scanf("%f%f%f",&s,&hra,&other);
    gross=s+hra+other;
    printf("the gross salaray will be:%f",gross);
    return 0;
    }
