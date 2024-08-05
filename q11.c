#include <stdio.h>

// 11. Desenvolva um programa em C que peça ao usuário um valor 
// em metros e o converta para pés, utilizando a fórmula Pés = Metros * 3.28084.

int main() {

    float metros, pes, pesC;

    printf("\n=== Metros para Pés ===\n");

    printf("\nDigite um valor em metros: ");
    scanf("%f", &metros);

    pesC = 3.28084;
    pes = metros * pesC;

    printf("\n===== Resultado =====\n");
    printf("\n%.2f metros equivalem a %.2f pés.\n", metros, pes);
    printf("\n===== Resolução =====\n");
    printf("\npés = metros * %f \npés = %.2f * %f \npés = %.2f \n", pesC, metros, pesC, pes);
    printf("\n=====================\n");
}