#include <stdio.h>

void moverBispo(int casas) {
    int vertical;
    int horizontal;

    if (casas <= 0) {
        return;
    }

    for (vertical = 0; vertical < 1; vertical++) {
        printf("Cima\n");

        for (horizontal = 0; horizontal < 1; horizontal++) {
            printf("Direita\n");
        }
    }

    moverBispo(casas - 1);
}

void moverRainha(int rainha){
    if (rainha > 0){
        printf("Esquerda\n");
        moverRainha(rainha - 1);
    }
}

void moverTorre(int torre){
    if (torre > 0){
        printf("Direita\n");
        moverTorre(torre - 1);
    }
}

void moverCavalo() {
    int vertical;
    int horizontal;
    int casasCima = 2;
    int casasDireita = 1;

    for (vertical = 0; vertical < casasCima; vertical++) {
        for (horizontal = 0; horizontal <= casasDireita; horizontal++) {
            if (horizontal == 0) {
                printf("Cima\n");
                continue;
            }

            /* A direita é impressa somente após a segunda casa para cima. */
            if (vertical == casasCima - 1) {
                printf("Direita\n");
            }

            break;
        }
    }
}

int main(){

    int pecas, casas;
    char *nomePeca = "";

    printf("Selecione a peca que ira mover: \n");
    printf("1. Bispo\n2. Rainha\n3. Torre\n4. Cavalo\n");
    scanf("%d", &pecas);

    printf("Digite quantas casas a(o) PECA ira andar (1 a 5): ");
    scanf("%d", &casas);

    printf("==========================================\n");
    
    switch (pecas){
        case 1: nomePeca = "BISPO"; printf("Movimentou o %s por %d Casas para: \n", nomePeca, casas); moverBispo(casas); break;
        case 2: nomePeca = "RAINHA"; printf("Movimentou a %s por %d Casas para: \n", nomePeca, casas); moverRainha(casas); break;
        case 3: nomePeca = "TORRE"; printf("Movimentou a %s por %d Casas para: \n", nomePeca, casas); moverTorre(casas); break;
        case 4: nomePeca = "CAVALO"; printf("Movimentou o %s:\n", nomePeca); moverCavalo(); break;
        default:
            printf("Opcao invalida!\n");
            return 1;
    }

    printf("==========================================\n");

    // Bispo 5 casas diagonal direita;
    // Rainha 8 casas para a esquerda;
    // Torre 5 casas para frente;

    return 0;
}