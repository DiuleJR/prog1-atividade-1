#include <stdio.h>


int main() {

    // Criar variáveis necessárias
    float C, F;

    // Mostrar cabeçalho na tela
    printf("\nFahrenheit para Celsius\n");

    // Solicitar temperatura em fahrenheit
    // do usuário
    printf("\nDigite um valor em °F: ");
    scanf("%f", &F);

    // Converter temperatura F para Celsius
    C = (F - 32) * 5 / 9; 

    // Mostrar resultado e resolução na tela
    printf("\n===== Resultado =====\n");
    printf("\n%.1f°F é equivalente a %.1f°C\n", F, C);
    printf("\n===== Resolução =====\n");
    printf("\nC = (F - 32) * 5/9 \nC = (%.1f - 32) * 5/9 \nC = %.1f * %f \nC = %.1f \n", F, F - 32, 5.0 / 9.0, C);
    printf("\n=====================\n");

    return 0;

}