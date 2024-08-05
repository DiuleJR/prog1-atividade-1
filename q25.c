#include <stdio.h>

// 25. Escreva um programa em C que solicite ao usuário a força aplicada e a distância percorrida 
// para calcular e exibir o trabalho realizado usando a fórmula Trabalho = Força * Distância.


int main() {

    float distancia;
    float forca;
    float trabalho;

    printf("\n=== Calcula o trabalho ===\n");

    printf("\nInforme a força aplicada: ");
    scanf("%f", &forca);

    printf("\nInforme a distância percorrida: ");
    scanf("%f", &distancia);

    trabalho = forca * distancia;

    printf("\n===== Resultado =====\n");
    printf("\nO trabalho é %.2f\n", trabalho);
    printf("\n===== Resolução =====\n");
    printf("\nT = f . d \nT = %.2f . %.2f \nT = %.2f \n", forca, distancia, trabalho);
    printf("\n=====================\n");

    return 0;

}