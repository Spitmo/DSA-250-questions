//ptanshu profit or loss
#include <stdio.h>
int main()
{
    int cp,sp, a;
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    
    if(sp > cp)
    {
        a = sp - cp;
        printf("Profit = %d", a);
    }
    else if(cp > sp)
    {
        a = cp - sp;
        printf("Loss = %d", a);
    }
    else
    {
        printf("No Profit No Loss.");
    }
    return 0;
}
