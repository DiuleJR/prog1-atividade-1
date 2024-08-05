#include <stdio.h>

// 31. Escreva um programa em C que solicite ao usuário três notas e seus respectivos pesos para calcular e exibir a média ponderada. 
// A fórmula é Média Ponderada = (Nota1 * Peso1 + Nota2 * Peso2 + Nota3 * Peso3) / (Peso1 + Peso2 + Peso3).


int main() {

    float nota1, nota2, nota3;
    float peso1, peso2, peso3;
    float mediaPonderada;

    printf("\n=== Calcula média ponderada ===\n");

    printf("\nDigite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite o peso da nota: ");
    scanf("%f", &peso1);

    printf("\nDigite a segunda nota: ");
    scanf("%f", &nota2);

    printf("digite o peso da nota: ");
    scanf("%f", &peso2);

    printf("\nDigite a terceira nota: ");
    scanf("%f", &nota3);

    printf("digite o peso da nota: ");
    scanf("%f", &peso3);

    mediaPonderada = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (peso1 + peso2 + peso3);

    printf("\n===== Resultado =====\n");
    printf("\nA média ponderada é %.2f\n", mediaPonderada);
    printf("\n=====================\n");

    return 0;

}