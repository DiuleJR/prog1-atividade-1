#include <stdio.h>

// 32. Implemente um programa em C que peça ao usuário a população inicial, 
// a população final e o número de anos para calcular e exibir a taxa de 
// crescimento populacional. A fórmula é Taxa de 
// Crescimento = ((População Final - População Inicial) / População Inicial) * 100 / Anos.


int main() {

    float anos;
    float crescimento;
    float populacaoFinal;
    float populacaoInicial;

    printf("\n=== Calcula a taxa de crescimento populacional ===\n");

    printf("\nInforme a população inicial: ");
    scanf("%f", &populacaoInicial);

    printf("\nInforme a população final: ");
    scanf("%f", &populacaoFinal);

    printf("\nInforme o número de anos: ");
    scanf("%f", &anos);

    crescimento = ((populacaoFinal - populacaoInicial) / populacaoInicial) * 100 / anos;

    printf("\n===== Resultado =====\n");
    printf("\nA taxa de crescimento populacional é %.2f\n", crescimento);
    printf("\n=====================\n");

    return 0;

}