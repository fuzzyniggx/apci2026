#include <stdio.h>
#include <string.h>

int main() {
    char verbo[100];

    printf("Digite um verbo: ");
    scanf("%99s", verbo);

    int tamanho = strlen(verbo);

    // Verifica se a palavra tem pelo menos 2 letras e termina em "ar"
    if (tamanho >= 2 && verbo[tamanho - 2] == 'a' && verbo[tamanho - 1] == 'r') {
        printf("\nO verbo '%s' termina com \"ar\".\n", verbo);
    } else {
        printf("\nO verbo '%s' NAO termina com \"ar\".\n", verbo);
    }

    return 0;
}