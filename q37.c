#include <stdio.h>

// 37. Desenvolva um programa em C que solicite ao usuário 
// o valor da diagonal maior e da diagonal menor de um losango 
// para calcular a área. Use a fórmula área = (Diagonal Maior * Diagonal Menor) / 2.


int main() {

    float diagonalMaior;
    float diagonalMenor;
    float area;

    printf("\n=== Calcula a área do losango ===\n");

    printf("\nInforme a diagonal maior: ");
    scanf("%f", &diagonalMaior);

    printf("\nInforme a diagonal menor: ");
    scanf("%f", &diagonalMenor);

    area = (diagonalMaior * diagonalMenor) / 2;

    printf("\n===== Resultado =====\n");
    printf("\nA área do losango é %.2f\n", area);
    printf("\n=====================\n");

    return 0;

}