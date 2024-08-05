#include <stdio.h>

// 3. Crie um programa em C que solicite ao usuário 
// três números inteiros e calcule a média aritmética deles.

int main() {

    int valorA, valorB, valorC;
    float resultado;

    printf("\n=== Calcula a média aritmética ===\n");

    printf("\nDigite um número inteiro: ");
    scanf("%d", &valorA);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &valorB);

    printf("\nDigite mais um número inteiro: ");
    scanf("%d", &valorC);

    resultado = (valorA + valorB + valorC) / 3;

    printf("\n===== Resultado =====\n");
    printf("\nA média aritmética entre %d, %d e %d é igual a %.2f\n", valorA, valorB, valorC, resultado);
    printf("\n=====================\n");

    return 0;
}