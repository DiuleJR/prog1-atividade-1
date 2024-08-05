#include <stdio.h>

//4. Implemente um programa em C que leia a largura e a altura 
// de um retângulo fornecidos pelo usuário e calcule a área.

int main() {

    float Area, base, altura;

    printf("\n=== Calcula A Área De Um Retângulo ===\n");

    printf("\nDigite o valor da largura do retângulo: ");
    scanf("%f", &base);

    printf("\nDigite o valor da altura do retângulo: ");
    scanf("%f", &altura);

    Area = base * altura;

    printf("\n===== Resultado =====\n");
    printf("\nA área de um retângulo com largura %.2f e altura %.2f é %.2f\n", base, altura, Area);
    printf("\n===== Resolução =====\n");
    printf("\nÁrea = base x altura = %.2f x %.2f = %.2f\n", base, altura, Area);
    printf("\n=====================\n");

    return 0;

}