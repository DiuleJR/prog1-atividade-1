#include <stdio.h>


int main() {

    float C, CC, F;

    printf("\n=== Celsius para Fahrenheit ===\n");

    printf("\nDigite um valor em °C: ");
    scanf("%f", &C);

    CC = C * 9 / 5;
    F = CC + 32;

    printf("\n===== Resultado =====\n");
    printf("\n%.1f°C é equivalente a %.1f°F\n", C, F);
    printf("\n===== Resolução =====\n");
    printf("\nF = C x 1,8 + 32 \nF = %.1f x 1,8 + 32 \nF = %.1f + 32 \nF = %.1f \n", C, CC, F);
    printf("\n=====================\n");

    return 0;

}