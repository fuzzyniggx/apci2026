#include <stdio.h>

int main(void) {
    int idade;
    float altura;
    char sexo;
    double peso;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite a altura (ex: 1.75): ");
    scanf("%f", &altura);

    printf("Digite o sexo (M ou F): ");
    scanf(" %c", &sexo);

    printf("Digite o peso (ex: 72.825): ");
    scanf("%lf", &peso);

    printf("\n--- FICHA CADASTRAL ---\n");
    printf("Idade  : %d anos\n", idade);
    printf("Altura : %.2f m\n", altura);
    printf("Sexo   : %c\n", sexo);
    printf("Peso   : %.3lf kg\n", peso);
    printf("-----------------------\n");

    return 0;
}