#include <stdio.h>

// 22. Escreva um programa em C que peça ao usuário um valor em milhas e o 
// converta para quilômetros usando a fórmula Quilômetros = Milhas / 0.621371.


int main() {

    float milhas;
    float quilometros;

    printf("\n=== Milhas para quilômetros ===\n");

    printf("\nInforme um valor em milhas: ");
    scanf("%f", &milhas);

    quilometros = milhas / 0.621371;

    printf("\n===== Resultado =====\n");
    printf("\n%.2f milhas equivalem a %.2f quilômetros.\n", milhas, quilometros);
    printf("\n===== Resolução =====\n");
    printf("\nquilometros = milhas x 0.621371 \nquilômetros = %.2f x 0.621371 \nquilômetros = %.2f \n", milhas, quilometros);
    printf("\n=====================\n");

    return 0;

}