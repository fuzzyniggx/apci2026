#include <stdio.h>

int main() {
    char tecla_pressionada;
    printf("pressione uma tecla: ");
    scanf("%c", &tecla_pressionada);
    while(getchar() != '\n'); //limpar o buffer
    printf("Voce pressionou a tecla '%c'\n", tecla_pressionada);

int idade; 
printf("Informe a sua idade: ");
scanf("%i", &idade);
while(getchar() != '\n'); //limpar o buffer
printf("Voce tem %i anos\n", idade);

float preco; 
printf("informe o preço da gasolina: ");
scanf("%f", &preco);
while(getchar() != '\n'); //limpar o buffer
printf("o preço da gasolina e R$ %.2f\n", preco);

    return 0;
}