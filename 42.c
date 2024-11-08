//ptanshu calender
#include <stdio.h>
int main() {
    int y, m, d, i, w;

    printf("Enter year: ");
    scanf("%d", &y);

    printf("Enter month (1-12): ");
    scanf("%d", &m);

    if (m < 1 || m > 12) {
        printf("Invalid month. Exiting.\n");
        return 1;
    }

    int mon[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) {
        mon[1] = 29;
    }

    d = mon[m - 1];

    printf("Enter day of week (0-6) where 0 is Sunday: ");
    scanf("%d", &w);

    printf("\nSun Mon Tue Wed Thu Fri Sat\n");
    for (i = 0; i < w; i++) {
        printf("    ");
    }

    for (i = 1; i <= d; i++) {
        printf("%3d ", i);
        if ((i + w) % 7 == 0) {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}
