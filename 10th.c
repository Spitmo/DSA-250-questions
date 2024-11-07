#include<stdio.h>
int main()
{
    int i,n;
    printf("enter the integer: ");
    scanf("%d",&n);
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    if(n==0)
    {
    fact=1;
    }
    if(n<0)
    {
    printf("error");
    }
    printf("factorial of %d is %d",n,fact);
    return 0;
}
