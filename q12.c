#include <stdio.h>
#include <math.h>

// 12. Implemente um programa em C que solicite ao usuário os comprimentos dos dois catetos 
// de um triângulo retângulo e calcule a hipotenusa usando a fórmula Hipotenusa = sqrt(cateto1^2 + cateto2^2).

// Precisei utilizar a biblioteca math.h
// para poder usar as funções sqrt e pow

// sqrt - obtém a raiz quadrada de um número
// pow - é usado para calcular a potência de um número
// %lf - é usado para ler valores do tipo double

int main() {

    double cateto1, cateto2, hipotenusa, somaDosCatetos;

    printf("\n=== Calcula a hipotenusa de um triângulo retângulo ===\n");

    printf("\nDigite o valor da cateto1: ");
    scanf("%lf", &cateto1);

    printf("\nDigite o valor do cateto2: ");
    scanf("%lf", &cateto2);
    
    somaDosCatetos = pow(cateto1, 2) + pow(cateto2, 2);
    hipotenusa = sqrt(somaDosCatetos);

    printf("\n===== Resultado =====\n");
    printf("\nO valor da hipotenusa é igual a %.2f\nOnde o cateto1 é %.2f e o cateto2 é %.2f\n", hipotenusa, cateto1, cateto2);
    printf("\n===== Resolução =====\n");
    printf("\nhipotenusa² = cateto1² + cateto2²");
    printf("\nhipotenusa² = %.2lf² + %.2lf²", cateto1, cateto2);
    printf("\nhipotenusa² = %.2lf + %.2lf", pow(cateto1, 2), pow(cateto2, 2));
    printf("\nhipotenusa² = %.2lf", somaDosCatetos);
    printf("\nhipotenusa = %.2lf \n", hipotenusa);
    printf("\n=====================\n");

    return 0;

}