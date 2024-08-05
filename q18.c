#include <stdio.h>

// 18. Desenvolva um programa em C que peça ao usuário seu peso em quilogramas e 
// altura em metros para calcular e exibir o Índice de Massa Corporal (IMC). 
// A fórmula para o cálculo é IMC = Peso / (Altura * Altura).


int main() {

    float altura;
    float imc;
    float peso;

    printf("\n=== Calcula o IMC ===\n");

    printf("\nInforme o seu peso: ");
    scanf("%f", &peso);

    printf("\nInforme a sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("\n===== Resultado =====\n");
    printf("\nCom a altura %.2f e peso %.2f, seu imc é %.2f\n", altura, peso, imc);
    printf("\n===== Resolução =====\n");
    printf("\nIMC = peso / (altura x altura) \nIMC = %.2f / (%.2f x %.2f) \nIMC = %.2f / %.2f \nIMC = %.2f \n", peso, altura, altura, peso, altura * altura, imc);
    printf("\n=====================\n");


    return 0;

}