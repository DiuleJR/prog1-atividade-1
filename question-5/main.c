#include <stdio.h>

int main() {
    
    float A, b, h, bh;

    // Mostrar o cabeçalho
    printf("\n=== Calcula a área de um triângulo ===\n");

    // Pedir a base do triangulo ao usuário e 
    // salvar na variável 'b'
    printf("\nInforme a base do triângulo: ");
    scanf("%f", &b);

    // Pedir a altura do triângulo ao usuário e
    // salvar na variável h
    printf("\nInforme a altura do triângulo: ");
    scanf("%f", &h);

    // Resolver o cálculo da área do triângulo e
    // salvar o resultado na variável A
    A = (b * h) / 2;

    // Salvar o produto entre b e h e salvar na
    // variável bh
    bh = b * h;

    // Mostrar o resultado na tela, seguido da
    // resolução
    printf("\n===== Resultado =====\n");
    printf("\nA área de um triângulo onde a base é %.2f e \na altura é %.2f tem como resultado %.2f\n", b, h, A);
    printf("\n===== Resolução =====\n");
    printf("\nÁrea = base x altura / 2 \nÁrea = %.2f x %.2f / 2 \nÁrea = %.2f / 2 \nÁrea = %.2f\n", b, h, bh, A);
    printf("\n=====================\n");

    return 0;

}