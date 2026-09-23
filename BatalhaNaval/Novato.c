#include <stdio.h>

int main() {
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // Inicializa todas as posições com 0 (água)

    // Vetores dos navios (tamanho 3, preenchidos com 3)
    int navioHorizontal[3] = {3, 3, 3};
    int navioVertical[3]   = {3, 3, 3};

    // Coordenadas iniciais
    int linhaH = 2, colunaH = 1; // Navio horizontal (Linha C, Coluna 2)
    int linhaV = 5, colunaV = 7; // Navio vertical (Linha F, Coluna 8)

    // Posiciona navio horizontal (soma no índice da coluna)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaH][colunaH + i] = navioHorizontal[i];
    }

    // Posiciona navio vertical (soma no índice da linha)
    for (int i = 0; i < 3; i++) {
        tabuleiro[linhaV + i][colunaV] = navioVertical[i];
    }

    // --- IMPRESSÃO DO TABULEIRO ---

    // 1. Imprime os números do cabeçalho (colunas de 1 a 10)
    printf("   "); // Espaço inicial para alinhar com as letras
    for (int j = 0; j < 10; j++) {
        printf("%d ", j + 1);
    }
    printf("\n");

    // 2. Imprime o tabuleiro com a letra de cada linha
    for (int i = 0; i < 10; i++) {
        printf("%c  ", linha[i]); // Usa %c para imprimir a letra correspondente!

        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n"); // Nova linha ao final de cada fileira
    }

    return 0;
}