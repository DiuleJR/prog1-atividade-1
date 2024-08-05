#include <stdio.h>
#include <math.h>

// 29. Implemente um programa em C que solicite ao usuário o raio da base e a altura de um cilindro 
// para calcular e exibir o volume do cilindro usando a fórmula Volume = pi * Raio^2 * Altura.


int main() {

    float altura;
    float pi;
    float raio;
    float volume;

    pi = 3.14;

    printf("\n=== Calcula o volume de um cilindro ===\n");

    printf("\nInforme a o raio da base do cilindro: ");
    scanf("%f", &raio);

    printf("\nInforme a altura do cilindro: ");
    scanf("%f", &altura);

    volume = pi * pow(raio, 2) * altura;

    printf("\n===== Resultado =====\n");
    printf("\nO volume do cilindro é %.2f\n", volume);
    printf("\n===== Resolução =====\n");
    printf("\nV = pi x r² x h \nV = %.2f x %.2f² x %.2f \nV = %.2f x %.2f x %.2f \nV = %.2f \n", pi, raio, altura, pi, pow(raio, 2), altura, volume);
    printf("\n=====================\n");

    return 0;

}