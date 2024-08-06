#include <stdio.h>
#include <math.h>

// 35. Desenvolva um programa em C que solicite ao usuário o valor presente 
// de um investimento, a taxa de juros e o número de períodos para calcular 
// e exibir o valor futuro usando a fórmula Valor Futuro = Valor Presente * (1 + Taxa/100)^Períodos.


int main() {

    float valorFuturo;
    float valorPresente;
    float taxaJuros;
    float periodos;

    printf("\n=== Calcula o valor futuro de um investimento ===\n");

    printf("\nInforme o valor presente do investimento: ");
    scanf("%f", &valorPresente);

    printf("\nInforme a taxa de juros: ");
    scanf("%f", &taxaJuros);

    printf("\nInforme o número de períodos: ");
    scanf("%f", &periodos);

    valorFuturo = valorPresente * pow((1 + taxaJuros/100), periodos);

    printf("\n===== Resultado =====\n");
    printf("\nO valor futuro do investimento será de %.2f\n", valorFuturo);
    printf("\n=====================\n");

    return 0;

}