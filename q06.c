#include <stdio.h>

// 6. Desenvolva um programa em C que solicite ao usuário o raio de um círculo e 
// calcule a área utilizando a fórmula área = pi * raio * raio.
 
int main() {

    // criar as variáveis que serão utilizadas
    float A, pi, r, r2;

    // Atribuir valor de pi a uma variável
    pi = 3.14;

    // mostrar o cabeçalho na tela 
    printf("\n=== Calcula a área de um círculo ===\n");

    // pedir o raio do círculo ao usuário
    // e salvar em uma variável
    printf("\nInforme o raio do círculo: ");
    scanf("%f", &r);

    // fazer o cálculo da área do círculo
    // e salvar em uma variável
    r2 = r * r;
    A = pi * r2;

    // mostrar o resultado e a resolução
    // na tela
    printf("\n===== Resultado =====\n");
    printf("\nA área do circulo onde o raio é %.2f tem como valor %.2f \n", r, A);
    printf("\n===== Resolução =====\n");
    printf("\nÁrea = pi * r² \nÁrea = %.2f * %.2f² \nÁrea = %.2f * %.2f \nÁrea = %.2f \n", pi, r, pi, r2, A);
    printf("\n=====================\n");

    return 0;
}