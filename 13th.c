#include<stdio.h>
int main()
{
    int a,b;
    printf("enter number to find gcd: ");
    scanf("%d %d",&a,&b);
    int gcd;
    int i=1;
    while (i<=a && i<=b)
    {
        if (a%i==0 && b%i==0)
        {
            gcd=i;
        }
        i++;
    }
    printf("the gcd of %d and %d is %d",a,b,gcd);
    return 0;
}
