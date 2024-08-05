#include <stdio.h>

// 24. Desenvolva um programa em C que peça ao usuário a massa e a aceleração de um objeto 
// para calcular e mostrar a força resultante usando a fórmula Força = Massa * Aceleração.


int main() {

    float aceleracao;
    float forcaResultante;
    float massa;

    printf("\n=== Calcula a força resultante ===\n");

    printf("\nInforme a massa do objeto: ");
    scanf("%f", &massa);

    printf("\ninforme a aceleração do objeto: ");
    scanf("%f", &aceleracao);

    forcaResultante = massa * aceleracao;

    printf("\n===== Resultado =====\n");
    printf("\nA força resultante é %.2f\n", forcaResultante);
    printf("\n===== Resolução =====\n");
    printf("\nFR = m . a \nFR = %.2f . %.2f \nFR = %.2f \n", massa, aceleracao, forcaResultante);
    printf("\n=====================\n");

    return 0;

}
