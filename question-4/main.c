#include <stdio.h>


int main() {

    float A, b, h;

    printf("\n=== Calcula A Área De Um Retângulo ===\n");

    printf("\nDigite o valor da largura do retângulo: ");
    scanf("%f", &b);

    printf("\nDigite o valor da altura do retângulo: ");
    scanf("%f", &h);

    A = b * h;

    printf("\n===== Resultado =====\n");
    printf("\nA área de um retângulo com largura %.2f e altura %.2f é %.2f\n", b, h, A);
    printf("\n===== Resolução =====\n");
    printf("\nÁrea = base x altura = %.2f x %.2f = %.2f\n", b, h, A);
    printf("\n=====================\n");

    return 0;

}