#include <stdio.h>


int main() {

    float horas;
    float minutos;

    printf("\n=== horas para minutos ===\n");

    printf("\nInforme um valor em horas: ");
    scanf("%f", &horas);

    minutos = horas * 60;

    printf("\n===== Resultado =====\n");
    printf("\n%.2f horas equivale a %.2f minutos.\n", horas, minutos);
    printf("\n===== Resolução =====\n");
    printf("\nminutos = horas * 60 \nminutos = %.2f * 60 \nminutos = %.2f \n", horas, minutos);
    printf("\n=====================\n");

    return 0;
}