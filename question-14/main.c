#include <stdio.h>
#include <math.h>


int main() {

    double montanteFinal;
    double taxaAnual;
    double tempo;
    double valorInicial;

    printf("\n=== Juros Composto ===\n");

    printf("\nInforme o valor inicial: ");
    scanf("%lf", &valorInicial);

    printf("\nInforme a taxa anual: ");
    scanf("%lf", &taxaAnual);

    printf("\nInforme o tempo de investimento em anos: ");
    scanf("%lf", &tempo);

    montanteFinal = valorInicial * pow((1 + taxaAnual/100), tempo);

    printf("\n===== Resultado =====\n");
    printf("\nO montante final é %.2lf\n", montanteFinal);
    printf("\n===== Resolução =====\n");
    printf("\nM = C . (1 + i)^n");
    printf("\nM = %.2lf . (1 + %.2lf/100)^%.0lf", valorInicial, taxaAnual, tempo);
    printf("\nM = %.2lf . (%.2lf)^%.0lf", valorInicial, 1 + taxaAnual / 100, tempo);
    printf("\nM = %.2lf . %.4lf", valorInicial, pow(1 + taxaAnual / 100, tempo));
    printf("\nM = %.2lf\n", montanteFinal);
    printf("\n=====================\n");

    return 0;

}