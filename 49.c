//ptanshu
#include <stdio.h>
int main() {
    int num1, num2, temp, i;

    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    for (i = 0; num2 != 0; i++) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    printf("GCD is: %d\n", num1);
    return 0;
}
