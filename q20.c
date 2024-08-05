#include <stdio.h>

// 20. Crie um programa em C que peça ao usuário a força aplicada em newtons e a área em 
// metros quadrados para calcular e exibir a pressão usando a fórmula Pressão = Força / Área.


int main() {

    float area;
    float forca;
    float pressao;

    printf("\n=== Calcula a pressão ===\n");

    printf("\nInforme a força aplicada em newtons: ");
    scanf("%f", &forca);

    printf("\nInforme a área em metros quadrados: ");
    scanf("%f", &area);

    pressao = forca / area;

    printf("\n===== Resultado =====\n");
    printf("\nA pressão será de %.2f\n", pressao);
    printf("\n===== Resolução =====\n");
    printf("\npressão = força / area \npressão = %.2f / %.2f \npressão = %.2f \n", forca, area, pressao);
    printf("\n======================\n");

    return 0;
}