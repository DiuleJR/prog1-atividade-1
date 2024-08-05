#include <stdio.h>

// 1. Escreva um programa em C que solicite ao usuário 
// dois números inteiros e exiba a soma deles.

int main() {
    int valorA, valorB, soma;

    printf("\n===== Soma De Dois Numeros Inteiros =====");

    printf("\n\nDigite um número inteiro: ");
    scanf("%d", &valorA);

    printf("\nDigite outro número inteiro: ");
    scanf("%d", &valorB);

    soma = valorA + valorB;

    printf("\n===== Resultado =====\n");
    printf("\n%d + %d = %d\n", valorA, valorB, soma);
    printf("\n=========================\n");

    return 0;

}