#include <stdio.h>

#define MAX_PALAVRAS 100
#define TAM_PALAVRA 50

int main() {
    int n;

    printf("Quantas palavras deseja ler? ");
    scanf("%d", &n);

    // Validação basica para evitar estourar o tamanho do vetor
    if (n <= 0 || n > MAX_PALAVRAS) {
        printf("Quantidade invalida. Por favor, insira um valor entre 1 e %d.\n", MAX_PALAVRAS);
        return 1;
    }

    // Vetor de strings: N linhas, e cada linha tem espaço para uma palavra
    char palavras[MAX_PALAVRAS][TAM_PALAVRA];

    printf("\n");
    // Leitura das palavras
    for (int i = 0; i < n; i++) {
        printf("Digite a palavra %d: ", i + 1);
        scanf("%49s", palavras[i]);
    }

    printf("\n--- Lista de Palavras Armazenadas ---\n");
    // Impressao das palavras armazenadas
    for (int i = 0; i < n; i++) {
        printf("%s\n", palavras[i]);
    }

    return 0;
}