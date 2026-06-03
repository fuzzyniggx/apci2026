#include <stdio.h>
#include <string.h>

int main() {
    char strings[3][100];
    char temp[100];

    // Leitura das 3 strings
    for (int i = 0; i < 3; i++) {
        printf("Digite a %da string: ", i + 1);
        scanf("%99s", strings[i]);
    }

    // Algoritmo de ordenacao simples (Bubble Sort adaptado para 3 itens)
    for (int i = 0; i < 2; i++) {
        for (int j = i + 1; j < 3; j++) {
            // Se a string atual for alfabeticamente maior que a proxima, inverte
            if (strcmp(strings[i], strings[j]) > 0) {
                strcpy(temp, strings[i]);
                strcpy(strings[i], strings[j]);
                strcpy(strings[j], temp);
            }
        }
    }

    printf("\nStrings em ordem alfabetica:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}