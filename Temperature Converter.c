#include <stdio.h>

int main() {
    char c, f;
    float C, F;
    printf("Choose to convert Celsius into Fahrenheit, type c\n");
    printf("Choose to convert Fahrenheit into Celsius, type f\n");
    scanf("%c", &c);
    if (c == 'c') {
        printf("Celsius degree: ");
        scanf("%f", &C);
        F = (C * 1.8) + 32;
        printf("Fahrenheit degree: %.1f", F);
    } else {
        printf("Fahrenheit degree: ");
        scanf("%f", &F);
        C = (F - 32) / 1.8;
        printf("Celsius degree: %.1f", C);
    }
    return 0;
}
