#include <stdio.h>

// 17. Escreva um programa em C que solicite ao usuário a massa e o volume de um objeto 
// para calcular a densidade. A fórmula a ser usada é Densidade = Massa / Volume.

int main() {
    
    float densidade;
    float massa;
    float volume;

    printf("\n=== Calcula a densidade de um objeto ===\n");

    // Solicita a massa do objeto ao usuário e salvar a informação
    // na variável 'massa'
    printf("\nInforme a massa do objeto: ");
    scanf("%f", &massa);

    // Solicidade o volume volume do objeto ao usuário e salva 
    // na variável 'volume'
    printf("\nInforme o volume do objeto: ");
    scanf("%f", &volume);

    // realiza o calculo da densidade e o resultado
    // é salvo na variável 'densidade'
    densidade = massa / volume;

    // mostra o resultado na tela 
    printf("\n===== Resultado =====\n");
    printf("\nO objeto que possui massa %.2f e volume %.2f tem como densidade %.2f\n", massa, volume, densidade);
    printf("\n===== Resolução =====\n");
    printf("\ndensidade = massa / volume \ndensidade = %.2f / %.2f \ndensidade = %.2f \n", massa, volume, densidade);
    printf("\n=====================\n");

    return 0;

}