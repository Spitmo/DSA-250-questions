#include<stdio.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf("%c",&c);
    if(c>='a' && c<='z')
    printf("its a alphabet");
    else if (c>='A' && c<='Z')
    printf("its a alphabet");
    else
    printf("its not alphabet");
    return 0;
}
