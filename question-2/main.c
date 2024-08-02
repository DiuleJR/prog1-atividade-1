#include <stdio.h>

int main() {
    int A, B, resultado;

    printf("\n===== Produto De Dois Números =====\n");

    printf("\nDigite um número inteiro: ");
    scanf("%d", &A);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &B);

    resultado = A * B;

    printf("\n===== Resultado =====\n");
    printf("\n%d x %d = %d\n", A, B, resultado);
    printf("\n=====================\n");

    return 0;

}