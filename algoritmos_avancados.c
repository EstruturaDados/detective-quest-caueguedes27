#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura que representa uma sala da mansão (nó da árvore binária)
typedef struct Sala {
    char nome[50];            // Nome da sala
    struct Sala *esquerda;    // Caminho à esquerda
    struct Sala *direita;     // Caminho à direita
} Sala;

// Função para criar uma nova sala
Sala* criarSala(const char *nome) {
    Sala *nova = (Sala*) malloc(sizeof(Sala));
    strcpy(nova->nome, nome);
    nova->esquerda = NULL;
    nova->direita = NULL;
    return nova;
}

// Função para montar o mapa fixo da mansão (árvore binária)
Sala* montarMansao() {
    // Cria os cômodos (nós)
    Sala *hall = criarSala("Hall de Entrada");
    Sala *biblioteca = criarSala("Biblioteca");
    Sala *cozinha = criarSala("Cozinha");
    Sala *quarto = criarSala("Quarto Principal");
    Sala *jardim = criarSala("Jardim");
    Sala *porao = criarSala("Porão");
    Sala *torre = criarSala("Torre");

    // Conecta os cômodos (ramos da árvore)
    hall->esquerda = biblioteca;
    hall->direita = cozinha;

    biblioteca->esquerda = quarto;
    biblioteca->direita = jardim;

    cozinha->esquerda = porao;
    cozinha->direita = torre;

    // Retorna o ponto de entrada (raiz da árvore)
    return hall;
}

// Função para explorar as salas recursivamente
void explorarSalas(Sala *atual) {
    char escolha;

    while (atual != NULL) {
        printf("\nVocê está na sala: 🏰 %s\n", atual->nome);

        // Verifica se é um nó-folha (fim do caminho)
        if (atual->esquerda == NULL && atual->direita == NULL) {
            printf("🚪 Esta sala não tem saídas. Você chegou ao fim do caminho!\n");
            return;
        }

        // Mostra opções de exploração
        printf("\nPara onde deseja ir?\n");
        if (atual->esquerda != NULL)
            printf("  [e] Ir para a esquerda → %s\n", atual->esquerda->nome);
        if (atual->direita != NULL)
            printf("  [d] Ir para a direita → %s\n", atual->direita->nome);
        printf("  [s] Sair da exploração\n");

        printf("Escolha: ");
        scanf(" %c", &escolha);

        switch (escolha) {
            case 'e':
                if (atual->esquerda != NULL)
                    atual = atual->esquerda;
                else
                    printf("\n❌ Caminho à esquerda não disponível.\n");
                break;

            case 'd':
                if (atual->direita != NULL)
                    atual = atual->direita;
                else
                    printf("\n❌ Caminho à direita não disponível.\n");
                break;

            case 's':
                printf("\n👋 Você decidiu sair da mansão. Fim da exploração!\n");
                return;

            default:
                printf("\nOpção inválida! Use 'e', 'd' ou 's'.\n");
        }
    }
}

// Função principal
int main() {
    // Monta a árvore da mansão
    Sala *mansao = montarMansao();

    printf("=== 🏰 EXPLORAÇÃO DA MANSÃO ASSOMBRADA ===\n");
    printf("Você começa no Hall de Entrada.\n");

    // Inicia a exploração
    explorarSalas(mansao);

    // Liberação de memória (opcional para nível iniciante)
    // Em projetos maiores, recomendaria liberar recursivamente cada sala

    printf("\n=== Fim do programa ===\n");
    return 0;
}
