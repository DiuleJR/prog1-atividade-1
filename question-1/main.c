#include <stdio.h>

int main() {
    int A, B, soma;

    printf("\n===== Soma De Dois Numeros Inteiros =====");

    printf("\n\nDigite um número inteiro: ");
    scanf("%d", &A);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &B);

    soma = A + B;

    printf("\n===== Resultado =====\n");
    printf("\n%d + %d = %d\n", A, B, soma);
    printf("\n=========================\n");

    return 0;

}