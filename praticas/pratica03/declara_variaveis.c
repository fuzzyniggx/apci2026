#include <stdio.h>

int main() {
    int idade = 25;
    char sexo = 'M';
    float altura = 1.75f;
    double peso = 72.845;

    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Altura: %.2f\n", altura);
    printf("Peso: %.3lf\n", peso);

    return 0;
}