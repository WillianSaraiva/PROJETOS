#include <stdio.h>

int main() {
    int peca, casa, direcao;
    char *nomePeca = "";
    char *nomeDirecao = "";

    // 1. Seleção da Peça
    printf("Escolha a peca que ira movimentar:\n");
    printf("1. TORRE\n2. BISPO\n3. RAINHA\n4. CAVALO");
    printf("Sua opcao: ");
    scanf("%d", &peca);

    switch (peca) {
        case 1: nomePeca = "TORRE"; break;
        case 2: nomePeca = "BISPO"; break;
        case 3: nomePeca = "RAINHA"; break;
        case 4: nomePeca = "CAVALO"; break;
        default:
            printf("Peca invalida!\n");
            return 1;
    }

    // 2. Quantidade de Casas
    printf("Digite quantas casas a(o) %s ira andar (1 a 5): ", nomePeca);
    scanf("%d", &casa);

    if (casa < 1 || casa > 5) {
        printf("Quantidade de casas invalida! Deve ser entre 1 e 5.\n");
        return 1;
    }

    // 3. Direção do Movimento
    printf("Digite a direcao do movimento:\n");
    printf("1. Esquerda\n2. Direita\n3. Cima\n4. Baixo\n");
    printf("Sua opcao: ");
    scanf("%d", &direcao);

    switch (direcao) {
        case 1: nomeDirecao = "ESQUERDA"; break;
        case 2: nomeDirecao = "DIREITA"; break;
        case 3: nomeDirecao = "CIMA"; break;
        case 4: nomeDirecao = "BAIXO"; break;
        default:
            printf("Direcao invalida!\n");
            return 1;
    }

    // 4. Exibição dos Resultados
    printf("\n=======================================================\n");
    printf("================== MOVIMENTO DO PLAYER ================\n");
    printf("=======================================================\n");

    // Imprime o movimento passo a passo usando apenas um laço simples
    for (int i = 1; i <= casa; i++) {
        printf("Passo %d: Movimentou a(o) %s\n", i, nomePeca);
    }

    printf("%d casas para (%s)!\n", casa, nomeDirecao);
    printf("=======================================================\n");

    return 0;
}