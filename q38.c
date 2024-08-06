#include <stdio.h>

// 38. Escreva um programa em C que peça ao usuário o preço de um produto 
// e a percentagem de desconto oferecido para calcular o preço final após 
// o desconto. Use a fórmula preço final = preço * (1 - Desconto/100).

int main() {

    float precoDoProduto;
    float desconto;
    float valorFinal;

    printf("\n=== Calcula o desconto de um produto ===\n");

    printf("\nInforme o preço do produto: ");
    scanf("%f", &precoDoProduto);

    printf("\nInforme o desconto: ");
    scanf("%f", &desconto);
    
    valorFinal = precoDoProduto * (1 - desconto / 100);

    printf("\n===== Resultado =====\n");
    printf("\nO produto que custa R$%.2f, com desconto de \n%.2f por cento seu valor final vai ser R$%.2f\n", precoDoProduto, desconto, valorFinal);
    printf("\n=====================\n");


    return 0;

}