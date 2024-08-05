#include <stdio.h>

// 26. Implemente um programa em C que peça ao usuário o trabalho realizado e o tempo gasto 
// para calcular e mostrar a potência usando a fórmula Potência = Trabalho / Tempo.


int main() {

    float tempo;
    float trabalho;
    float potencia;

    printf("\n=== Calcula a potência ===\n");

    printf("\nInforme o trabalho realizado: ");
    scanf("%f", &trabalho);

    printf("\nInforme o tempo gasto: ");
    scanf("%f", &tempo);

    potencia = trabalho / tempo;

    printf("\n===== Resultado =====\n");
    printf("\nA potência é %.2f\n", potencia);
    printf("\n===== Resolução =====\n");
    printf("\nP = W / t \nP = %.2f / %.2f \nP = %.2f \n", trabalho, tempo, potencia);
    printf("\n=====================\n");
}