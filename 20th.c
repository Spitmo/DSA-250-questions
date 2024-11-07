#include<stdio.h>
int main()
{
    int a;
    printf("enter a number: ");
    scanf("%d",&a);
    if(a>0||a<0)
    {
        if (a%2==0)
        {
            printf("the number is even");
        }
        else
        {
            printf("the number is odd");
        }
    }
    else
    printf("the number is 0");
    return 0;
}
