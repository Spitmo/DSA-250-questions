#include<stdio.h>
int main()
{
 float r;
 printf("enter radius for circle: ");
 scanf("%f",&r);
 float p=3.14*r*2;
 float a=3.14*r*r;
 printf("the perimeter and area of circle is:%f,%f",p,a);
 return 0;    
}
