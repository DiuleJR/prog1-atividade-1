#include <stdio.h>

// 19. Implemente um programa em C que solicite ao usuário a distância percorrida e o tempo gasto, 
//para calcular e mostrar a velocidade média usando a fórmula Velocidade = Distância / Tempo.


int main() {

    float distancia;
    float tempo;
    float velocidade;

    printf("\n=== Calcula a velocidade média ===\n");

    printf("\nInforme a distância percorrida: ");
    scanf("%f", &distancia);

    printf("\nInforme o tempo gasto: ");
    scanf("%f", &tempo);

    velocidade = distancia / tempo;

    printf("\n===== Resultado =====\n");
    printf("\nA velocidade média é %.2f\n", velocidade);
    printf("\n===== Resolução =====\n");
    printf("\nvelocidade = distancia / tempo \nvelocidade = %.2f / %.2f \nvelocidade = %.2f \n", distancia, tempo, velocidade);
    printf("\n=====================\n");

    return 0;

}