#include <stdio.h>

int main(void) {
    int num1, num2;

    printf("Digite dois numeros inteiros (separados por espaco): ");
    scanf("%d %d", &num1, &num2);

    printf("Valores lidos: %d e %d\n", num1, num2);

    return 0;
}