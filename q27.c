#include <stdio.h>
#include <math.h>

// 27. Desenvolva um programa em C que solicite ao usuário a aresta de um cubo 
// para calcular e exibir o volume do cubo usando a fórmula Volume = Aresta^3.


int main() {

    float aresta;
    float volume;

    printf("\n=== Calcula o volume do cubo ===\n");

    printf("\nInforme a aresta do cubo: ");
    scanf("%f", &aresta);

    volume = pow(aresta, 3);

    printf("\n===== Resultado =====\n");
    printf("\nO volume do cubo é %.2f\n", volume);
    printf("\n===== Resolução ======\n");
    printf("\nV = a³ \nV = %.2f³ \nV = %.2f \n", aresta, volume);
    printf("\n======================\n");

    return 0;

}