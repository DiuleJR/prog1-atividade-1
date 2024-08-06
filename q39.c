#include <stdio.h>

// 39. Implemente um programa em C que solicite ao usuário o número de 
// lados de um polígono regular e a medida de um lado, para calcular o 
// perímetro do polígono. Use a fórmula perímetro = Número de Lados * Lado.


int main() {

    float numeroLados;
    float medidaLado;
    float perimetroPoligono;

    printf("\n=== Calcula o perímetro de um polígono ===\n");

    printf("\nInforme o número de lados do polígono: ");
    scanf("%f", &numeroLados);

    printf("\nInforme a medida de um dos lados: ");
    scanf("%f", &medidaLado);

    perimetroPoligono = numeroLados * medidaLado;

    printf("\n===== Resultado =====\n");
    printf("\nO perímetro do polígono é %.2f\n", perimetroPoligono);
    printf("\n=====================\n");

    return 0;

}