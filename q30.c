#include <stdio.h>
#include <math.h>

// 30. Desenvolva um programa em C que peça ao usuário o raio da base e a altura de um cone para 
// calcular e mostrar o volume do cone usando a fórmula Volume = (1/3) * pi * Raio^2 * Altura.


int main() {

    float altura;
    float pi;
    float raio;
    float volume;

    pi = 3.14;

    printf("\n=== Calcula o volume de um cone ===\n");

    printf("\nInforme o raio da base do cone: ");
    scanf("%f", &raio);

    printf("\nInforme a altura do cone: ");
    scanf("%f", &altura);

    volume = (1.0f/3.0f) * pi * pow(raio, 2) * altura;

    printf("\n===== Resultado =====\n");
    printf("\nO volume do cone é %.2f\n", volume);
    printf("\n===== Resolução =====\n");
    printf("\nV = 1/3 x pi x r² x h \nV = 1/3 x %.2f x %.2f² x %.2f \nV = %.2f x %.2f x %.2f x %.2f \nV = %.2f \n", pi, raio, altura, 1.0f/3.0f, pi, pow(raio, 2), altura, volume);
    printf("\n=====================\n");

    return 0;

}