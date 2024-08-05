#include <stdio.h>
#include <math.h>

// 23. Implemente um programa em C que solicite ao usuário a massa e a velocidade de um objeto para 
// calcular e exibir a energia cinética usando a fórmula Energia Cinética = (Massa * Velocidade^2) / 2.


int main() {

    float eCinetica;
    float massa;
    float velocidade;

    printf("\n=== Calcula a energia cinética ===\n");

    printf("\nInforme a massa do objeto: ");
    scanf("%f", &massa);

    printf("\nInforme a velocidade do objeto: ");
    scanf("%f", &velocidade);

    eCinetica = (massa * pow(velocidade, 2) / 2);

    printf("\n===== Resultado =====\n");
    printf("\nA energia cinética é %.2f\n", eCinetica);
    printf("\n===== Resolução =====\n");
    printf("\nEc = m . v² / 2 \nEc = %.2f . %.2f² / 2 \nEc = %.2f . %.2f / 2 \nEc = %.2f / 2 \nEc = %.2f \n", massa, velocidade, massa, pow(velocidade, 2), massa * pow(velocidade, 2), eCinetica);
    printf("\n=====================\n");

    return 0;

}