#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 sides of triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a+b>c && b+c>a && a+c>b)
    printf("its valid");
    else
    printf("its not valid");
    return 0;
}
