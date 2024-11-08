//ptanshu
#include <stdio.h>
int main() {
    int amount, remaining;
    int denominations[] = {2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
    int notes[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i = 0;

    printf("Enter amount: ");
    scanf("%d", &amount);

    remaining = amount;

    do {
        notes[i] = remaining / denominations[i];
        remaining = remaining % denominations[i];
        i++;
    } while (i < 10);

    printf("Denominations:\n");
    i = 0;
    do {
        if (notes[i] > 0) {
            printf("%d x %d = %d\n", notes[i], denominations[i], notes[i] * denominations[i]);
        }
        i++;
    } while (i < 10);

    return 0;
}
