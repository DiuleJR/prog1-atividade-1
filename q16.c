#include <stdio.h>

// 16. Implemente um programa em C que peça ao usuário um valor em minutos e o 
// converta para segundos, utilizando a fórmula Segundos = Minutos * 60.

int main() {

    float minutos, segundos;

    printf("\n=== Minutos para segundos ===\n");

    printf("\nInforme uma valor em minutos: ");
    scanf("%f", &minutos);

    segundos = minutos * 60;

    printf("\n===== Resultado =====\n");
    printf("\n%.2f minutos equivalem a %.2f segundos.\n", minutos, segundos);
    printf("\n===== Resolução =====\n");
    printf("\nsegundos = minutos * 60 \nsegundos = %.2f * 60 \nsegundos = %.2f \n", minutos, segundos);
    printf("\n=====================\n");

    return 0;
    
}