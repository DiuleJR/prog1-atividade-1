#include <stdio.h>


int main() {

    float C, pi, r;

    pi = 3.14;

    printf("\n=== Calcula o perímetro de um círculo ===\n");

    printf("\nInforme o raio do círculo: ");
    scanf("%f", &r);

    C = 2 * pi * r;

    printf("\n===== Resultado =====\n");
    printf("\nO perímetro do círculo onde o raio é %.2f tem como valor %.2f\n", r, C);
    printf("\n===== Resolução =====\n");
    printf("\nC = 2 x pi x %.2f \nC = %.2f \n", r, C);
    printf("\n=====================\n");

    return 0;

}