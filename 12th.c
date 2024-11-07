#include<stdio.h>
int main()
{
    int a,b;
    printf("enter numbers: ");
    scanf("%d%d",&a,&b);
    int lcm,fact=1;
    lcm=(a>2?a:b);
    while (fact)
    {
        if(lcm%a==0&& lcm%b==0)
        {
            printf("lcm of %d and %d is %d",a,b,lcm);
            fact=0;
        }
        lcm++;
    }
    return 0;
}
