#include <stdio.h>
#include <math.h>

// 36. Implemente um programa em C que peça ao usuário 
// a taxa de juros nominal e o número de períodos por 
// ano para calcular e mostrar a taxa de juros efetiva 
//anual usando a fórmula 
// Taxa Efetiva = (1 + Taxa / Períodos)^Períodos - 1.


int main() {

    float periodosAnuais;
    float taxaEfetiva;
    float taxaJurosNominal;

    printf("\n=== Calcula a taxa efetiva ===\n");

    printf("\nInforme a taxa de juros nominal: ");
    scanf("%f", &taxaJurosNominal);

    printf("\nInforme o número de períodos por ano: ");
    scanf("%f", &periodosAnuais);

    taxaEfetiva = pow((1 + taxaJurosNominal / periodosAnuais), periodosAnuais) - 1;

    printf("\n===== Resultado =====\n");
    printf("\nA taxa efetiva é %.4f\n", taxaEfetiva);
    printf("\n=====================\n");

    return 0;

}