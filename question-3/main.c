#include <stdio.h>

int main() {

    int A, B, C;
    float resultado;

    printf("\n=== Calcula a média aritmética ===\n");

    printf("\nDigite um número inteiro: ");
    scanf("%d", &A);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &B);

    printf("\nDigite mais um número inteiro: ");
    scanf("%d", &C);

    resultado = (A + B + C) / 3;

    printf("\n===== Resultado =====\n");
    printf("\nA média aritmética entre %d, %d e %d é igual a %.2f\n", A, B, C, resultado);
    printf("\n=====================\n");

    return 0;
}