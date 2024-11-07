#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b==c)
    printf("its equilateral triangle");
    else if(a==b!=c||a==c!=b||b==c!=a)
    printf("its a isoscleas triangle");
    else 
    printf("its a scalene triangle");
}
