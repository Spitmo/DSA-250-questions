#include<stdio.h>
int main()
{
    int i;
    float f;
    char c;
    double d;
    printf("the size of int:%zu bytes\n",sizeof(i));
    printf("the size of float:%zu bytes\n",sizeof(f));
    printf("the size of char:%zu bytes\n",sizeof(c));
    printf("the size of double:%zu bytes\n",sizeof(d));
    return 0;
}
