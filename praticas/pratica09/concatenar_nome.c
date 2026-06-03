#include <stdio.h>
#include <string.h>

int main() {
    char primeiro_nome[50];
    char ultimo_nome[50];
    char nome_completo[105]; // Tamanho suficiente para os dois nomes + espaço + \0

    printf("Digite o primeiro nome: ");
    scanf("%49s", primeiro_nome);

    printf("Digite o ultimo nome: ");
    scanf("%49s", ultimo_nome);

    // Copia o primeiro nome para a string final
    strcpy(nome_completo, primeiro_nome);
    
    // Adiciona um espaco em branco
    strcat(nome_completo, " ");
    
    // Concatena o ultimo nome ao final da string
    strcat(nome_completo, ultimo_nome);

    printf("\nNome concatenado: %s\n", nome_completo);

    return 0;
}