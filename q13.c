#include <stdio.h>
#include <math.h>

// 13. Escreva um programa em C que solicite ao usuário o valor inicial de um investimento, a taxa de juros anual (como um percentual inteiro) e o tempo do 
// investimento em anos. Calcule o montante de juros simples acumulado ao final do período e exiba este valor. A fórmula é Juros Simples = Principal * (Taxa / 100) * Tempo.

int main() {

    float juroSimples;
    float taxaAnual;
    float tempo;
    float valorInicial;

    printf("\n=== Juros Simples ===\n");

    printf("\nInforme o investimento inicial: ");
    scanf("%f", &valorInicial);

    printf("\nInforme a taxa de juros anual: ");
    scanf("%f", &taxaAnual);

    printf("\nInforme o tempo de investimento em anos: ");
    scanf("%f", &tempo);

    juroSimples = valorInicial * (taxaAnual/100) * tempo;

    printf("\n===== Resultado =====\n");
    printf("\nOs juros acumulados são: %.2f\n", juroSimples);
    printf("\n===== Resolução =====\n");
    printf("\nJ = C x (i/100) x t");
    printf("\nJ = %.2f x (%.0f/100) x %.0f", valorInicial, taxaAnual, tempo);
    printf("\nJ = %.2f x %.2f x %.0f", valorInicial, taxaAnual/100, tempo);
    printf("\nJ = %.2f", juroSimples);
    printf("\n=====================\n");

    return 0;

}