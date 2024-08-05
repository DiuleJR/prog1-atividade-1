#include <stdio.h>

// 10. Escreva um programa em C que solicite ao usuário um valor em quilogramas 
// e o converta para libras usando a fórmula Libras = Quilogramas * 2.20462.

int main() {
    float kg, lb;

    printf("\n=== Quilogramas para Libras ===\n");

    printf("\nDigite um valor em quilogramas: ");
    scanf("%f", &kg);

    lb = kg * 2.20462;

    printf("\n===== Resultado =====\n");
    printf("\n%.2f quilogramas equivale a %.2f libras.\n", kg, lb);
    printf("\n===== Resolução =====\n");
    printf("\nlibras = quilogramas x 2,20462 \nlibras = %.2f x 2,20462 \nlibras = %.2f \n", kg, lb);
    printf("\n=====================\n");

    return 0;

}