#include <stdio.h>
#include <math.h>

// 34. Escreva um programa em C que peça ao usuário o valor futuro de um investimento, 
// a taxa de juros e o número de períodos para calcular e exibir o valor presente usando 
// a fórmula Valor Presente = Valor Futuro / (1 + Taxa/100)^Períodos.


int main() {

    float periodos;
    float taxaJuros;
    float valorFuturo;
    float valorPresente;

    printf("\n=== Calcula o valor presente =====\n");

    printf("\nInforme o valor futuro: ");
    scanf("%f", &valorFuturo);

    printf("\nIforme a taxa de juros: ");
    scanf("%f", &taxaJuros);

    printf("\nInforme o número de períodos: ");
    scanf("%f", &periodos);

    valorPresente = valorFuturo / pow((1 + taxaJuros / 100), periodos);

    printf("\n===== Resultado =====\n");
    printf("\nO valor presente é %.2f\n", valorPresente);
    printf("\n=====================\n");

    return 0;

}
