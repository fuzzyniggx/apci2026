#include <stdio.h>
#include <string.h>

// Requisito: Utilizar ao menos uma struct personalizada
typedef struct {
    int id;
    char nome[50];
    float preco;
} Produto;

int main() {
    // Requisito: Vetor de estruturas com no mínimo 10 posições
    Produto estoque[10];
    
    // Requisito: Controle explícito da quantidade atual de registros
    int qtd_atual = 0;
    int max_registros = 10;
    int opcao = 0;

    // Requisito: Menu principal interativo até o usuário escolher a opção de saída
    do {
        printf("\n=========================================\n");
        printf("       SISTEMA DE CADASTRO (CRUD)        \n");
        printf("=========================================\n");
        printf("1. Cadastrar registro\n");
        printf("2. Listar registros\n");
        printf("3. Buscar registro pelo ID\n");
        printf("4. Atualizar registro\n");
        printf("5. Remover registro\n");
        printf("6. Sair\n");
        printf("=========================================\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);
        
        // Limpar o buffer do teclado para evitar bugs com o fgets nas strings
        while (getchar() != '\n'); 

        // Estrutura de decisão principal para o menu
        if (opcao == 1) {
            // CADASTRAR
            if (qtd_atual >= max_registros) {
                printf("[ERRO] Limite de %d registros atingido. Nao e possivel cadastrar mais.\n", max_registros);
            } else {
                int novo_id;
                printf("Digite o ID unico do produto: ");
                scanf("%d", &novo_id);
                
                // Validação de entrada: ID não pode ser negativo ou zero
                if (novo_id <= 0) {
                    printf("[ERRO] O ID deve ser um numero inteiro positivo.\n");
                    continue; // Volta para o início do menu
                }

                // Requisito: O identificador deve ser único e validado no momento do cadastro
                int id_duplicado = 0;
                for (int i = 0; i < qtd_atual; i++) {
                    if (estoque[i].id == novo_id) {
                        id_duplicado = 1;
                        break;
                    }
                }

                if (id_duplicado) {
                    printf("[ERRO] O ID %d ja esta cadastrado no sistema!\n", novo_id);
                } else {
                    estoque[qtd_atual].id = novo_id;
                    
                    while (getchar() != '\n'); // Limpar buffer

                    printf("Digite o nome do produto: ");
                    fgets(estoque[qtd_atual].nome, 50, stdin);
                    estoque[qtd_atual].nome[strcspn(estoque[qtd_atual].nome, "\n")] = 0; // Remover o 'enter' do final da string

                    printf("Digite o preco do produto: R$ ");
                    scanf("%f", &estoque[qtd_atual].preco);

                    // Validação de entrada: preço não pode ser negativo
                    if (estoque[qtd_atual].preco < 0) {
                        printf("[ERRO] Preco invalido. Cadastro cancelado.\n");
                    } else {
                        qtd_atual++;
                        printf("[SUCESSO] Registro cadastrado! Quantidade atual: %d/%d\n", qtd_atual, max_registros);
                    }
                }
            }

        } else if (opcao == 2) {
            // LISTAR
            // Requisito: Impedir ações quando não houver registros
            if (qtd_atual == 0) {
                printf("[AVISO] Nenhum registro cadastrado no momento.\n");
            } else {
                printf("\n--- LISTA DE PRODUTOS ---\n");
                for (int i = 0; i < qtd_atual; i++) {
                    printf("[%d] ID: %d | Nome: %s | Preco: R$ %.2f\n", i, estoque[i].id, estoque[i].nome, estoque[i].preco);
                }
            }

        } else if (opcao == 3) {
            // BUSCAR
            if (qtd_atual == 0) {
                printf("[AVISO] Nenhum registro para buscar.\n");
            } else {
                int id_busca;
                printf("Digite o ID que deseja buscar: ");
                scanf("%d", &id_busca);

                int encontrado = 0;
                for (int i = 0; i < qtd_atual; i++) {
                    if (estoque[i].id == id_busca) {
                        printf("\n[REGISTRO ENCONTRADO]\n");
                        printf("ID: %d | Nome: %s | Preco: R$ %.2f\n", estoque[i].id, estoque[i].nome, estoque[i].preco);
                        encontrado = 1;
                        break;
                    }
                }
                if (!encontrado) {
                    printf("[AVISO] Registro com ID %d nao localizado.\n", id_busca);
                }
            }

        } else if (opcao == 4) {
            // ATUALIZAR
            if (qtd_atual == 0) {
                printf("[AVISO] Nenhum registro para atualizar.\n");
            } else {
                int id_busca;
                printf("Digite o ID do registro que deseja atualizar: ");
                scanf("%d", &id_busca);

                int indice_encontrado = -1;
                for (int i = 0; i < qtd_atual; i++) {
                    if (estoque[i].id == id_busca) {
                        indice_encontrado = i;
                        break;
                    }
                }

                if (indice_encontrado != -1) {
                    printf("\nAtualizando dados do ID: %d (Nome: %s)\n", estoque[indice_encontrado].id, estoque[indice_encontrado].nome);
                    
                    while (getchar() != '\n'); // Limpar buffer
                    
                    printf("Digite o novo nome: ");
                    fgets(estoque[indice_encontrado].nome, 50, stdin);
                    estoque[indice_encontrado].nome[strcspn(estoque[indice_encontrado].nome, "\n")] = 0;

                    printf("Digite o novo preco: R$ ");
                    float novo_preco;
                    scanf("%f", &novo_preco);

                    if (novo_preco < 0) {
                         printf("[ERRO] Preco invalido. Atualizacao descartada.\n");
                    } else {
                        estoque[indice_encontrado].preco = novo_preco;
                        printf("[SUCESSO] Registro atualizado com exito!\n");
                    }
                } else {
                    printf("[AVISO] Registro com ID %d nao localizado.\n", id_busca);
                }
            }

        } else if (opcao == 5) {
            // REMOVER
            if (qtd_atual == 0) {
                printf("[AVISO] Nenhum registro para remover.\n");
            } else {
                int id_busca;
                printf("Digite o ID do registro que deseja remover: ");
                scanf("%d", &id_busca);

                int indice_encontrado = -1;
                for (int i = 0; i < qtd_atual; i++) {
                    if (estoque[i].id == id_busca) {
                        indice_encontrado = i;
                        break;
                    }
                }

                if (indice_encontrado != -1) {
                    // Requisito: A remoção deve manter a consistência do vetor. 
                    // Solução: Fazer o deslocamento (shift) dos elementos à direita para a esquerda, cobrindo o "buraco".
                    for (int j = indice_encontrado; j < qtd_atual - 1; j++) {
                        estoque[j] = estoque[j + 1];
                    }
                    
                    qtd_atual--; // Diminui o controle explícito
                    printf("[SUCESSO] Registro com ID %d foi removido e vetor reorganizado.\n", id_busca);
                } else {
                    printf("[AVISO] Registro com ID %d nao localizado.\n", id_busca);
                }
            }

        } else if (opcao == 6) {
            // SAIR
            printf("Encerrando o sistema...\n");
        } else {
            // Validação de Entrada: Menu Inválido
            printf("[ERRO] Opcao invalida! Por favor, escolha um numero entre 1 e 6.\n");
        }

    } while (opcao != 6);

    return 0;
}