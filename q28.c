#include <stdio.h>
#include <math.h>

// 28. Escreva um programa em C que peça ao usuário o raio de uma esfera para calcular 
// e mostrar o volume da esfera usando a fórmula Volume = (4/3) * pi * Raio^3.


int main() {

    float raio;
    float volume;

    printf("\n=== Calcula o volume de uma esfera ===\n");

    printf("\nInforme o raio da esfera: ");
    scanf("%f", &raio);
    
    // A fórmula volume = (4/3) * 3.14 * pow(raio, 3);
    // Não estava funcionando corretamente.
    volume = (4 * 3.14 * pow(raio, 3)) / 3;

    printf("\n===== Resultado =====\n");
    printf("\nO volume da esfera é %.2f\n", volume);
    printf("\n===== Resolução =====\n");
    printf("\nV = 4 x pi x r³ / 3 \nV = 4 x 3.14 x %.2f³ / 3 \nV = %.2f / 3 \nV = %.2f \n", raio, 4 * 3.14 * pow(raio, 3), volume);
    printf("\n=====================\n");

    return 0;

}