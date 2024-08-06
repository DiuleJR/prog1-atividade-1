#include <stdio.h>

// 33. Desenvolva um programa em C que solicite ao usuário o valor inicial 
// de um bem, seu valor residual e a vida útil em anos para calcular e exibir 
// a depreciação anual. A fórmula é Depreciação Anual = (Valor Inicial - Valor Residual) / Vida Útil.


int main() {

    float dAnual;
    float valorInicial;
    float valorResidual;
    float vidaUtilAnos;

    printf("\n=== Calcula a depreciação anual ===\n");

    printf("\nInforme o valor inicial: ");
    scanf("%f", &valorInicial);

    printf("\nInforme o valor residual: ");
    scanf("%f", &valorResidual);

    printf("\nInforme a vida útil em anos: ");
    scanf("%f", &vidaUtilAnos);

    dAnual = (valorInicial - valorResidual) / vidaUtilAnos;

    printf("\n===== Resultado =====\n");
    printf("\nA depreciação anual é %.2f\n", dAnual);
    printf("\n=====================\n");

    return 0;

}