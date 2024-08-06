#include <stdio.h>
#include <math.h>

// 40. Desenvolva um programa em C que peça ao usuário a altura 
// e o raio de um cilindro para calcular o volume. Use a fórmula 
// volume = pi * Raio^2 * Altura, considerando pi aproximadamente 3.14159


int main() {

    float cilindroAltura;
    float cilindroRaio;
    float cilindroVolume; 

    float pi = 3.14159;

    printf("\n=== Calcula o volume do cilindro ===\n");

    printf("\nInforme a altura do cilindro: ");
    scanf("%f", &cilindroAltura);

    printf("\nInforme o raio do cilindro: ");
    scanf("%f", &cilindroRaio);

    cilindroVolume = pi * pow(cilindroRaio, 2) * cilindroAltura;

    printf("\n===== Resultado =====\n");
    printf("\nO volume do cilindro é %.2f\n", cilindroVolume);
    printf("\n=====================\n");

    return 0;

}