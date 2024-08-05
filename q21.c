#include <stdio.h>

// 21. Desenvolva um programa em C que solicite ao usuário um valor em quilômetros e 
// o converta para milhas usando a fórmula Milhas = Quilômetros * 0.621371.


int main() {

    float milhas;
    float quilometros;

    printf("\n=== Quilometros para milhas ===\n");

    printf("\ninforme um valor em quilômetros: ");
    scanf("%f", &quilometros);

    milhas = quilometros * 0.621371;

    printf("\n===== Resultado =====\n");
    printf("\n%.2f quilômetros equivalem a %.2f milhas\n", quilometros, milhas);
    printf("\n===== Resolução =====\n");
    printf("\nmilhas = quilômetros x 0.621371 \nmilhas = %.2f x 0.621371 \nmilhas = %.2f \n", quilometros, milhas);
    printf("\n=====================\n");


    return 0;

}