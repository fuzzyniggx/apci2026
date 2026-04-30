#include <stdio.h>

int main(void) {
    char caractere;

    printf("Digite um caractere: ");
    scanf("%c", &caractere);

    printf("Caractere informado: %c\n", caractere);
    printf("Codigo na tabela ASCII: %d\n", caractere);

    return 0;
}