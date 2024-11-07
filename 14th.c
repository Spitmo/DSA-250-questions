#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enter 3 numbers to compare: ");
    scanf("%d %d %d",&a,&b,&c);
   if (a>b && a>c)
   {
   printf("the greatest is  %d",a);
   }
    if (b>a && b>c)
   {
   printf("the greatest is  %d",b);
   }
    if (c>a && c>b)
   {
   printf("the greatest is  %d",c);
   }
   else 
    printf("all numbers are same");
    
    return 0;
}
