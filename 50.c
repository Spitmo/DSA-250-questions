//ptanshu
#include <stdio.h>
int main() {
    float temp;
    int choice;
    printf("Temperature Conversion\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter choice: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temp);
    switch (choice) {
        case 1: printf("%.2f°C = %.2f°F\n", temp, temp * 9 / 5 + 32); break;
        case 2: printf("%.2f°F = %.2f°C\n", temp, (temp - 32) * 5 / 9); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}
