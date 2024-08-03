#include <stdio.h>
#include <math.h>


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