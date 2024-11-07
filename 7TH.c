#include<stdio.h>
int main()
{
    float a,b,c,d,e,marks,result;
    printf("enter your marks of 5 subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    marks=a+b+c+d+e;
    result=marks/500*100
    printf("the percentage of 5 subjects is:%f",result);
    return 0;
    }
