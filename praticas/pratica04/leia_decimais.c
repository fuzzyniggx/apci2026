#include <stdio.h>

int main(void) {
    float nota1, nota2;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Notas lidas: %.2f e %.2f\n", nota1, nota2);

    return 0;
}