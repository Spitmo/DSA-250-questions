#include<stdio.h>
int main()
{
    char c;
    printf("enter a character: ");
    scanf(" %c",&c);
    if(c>='a' && c<='z')
    printf("its lowercase");
    else if (c>='A' && c<='Z')
    printf("its a uppercase");
    else if (c>=0 && c<= 9)
    printf("its an digit");
    else
    printf("its a special character");
    return 0;
}
