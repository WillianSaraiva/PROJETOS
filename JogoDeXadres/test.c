#include <stdio.h>

int main(){
    int direcao, casa, mov, peca;
    int cavalo = 1, bispo = 1;
    int esq, dir, cima, baixo;
    char *nomeAtributo1 = "";

    // Bispo 5 casas diagonal direita;
    // Rainha 8 casas para a esquerda;
    // Torre 5 casas para frente;

    printf("Escolha a beca que ira movimentar:\n");
    printf("1. TORRE\n2. BISPO\n3. RAINHA\n4. CAVALO\n");
    printf("Sua opcao:");
    scanf("%d", &peca);

    printf("Digite quantas casas a PECA ira andar:\nTORRE = Opcao 1 a 5.\nRAINHA = Opcao 1 a 5.\nBISPO = Opcao 6.\nCavalo = Opcao 7.\n");
    scanf("%d", &casa);

    printf("Digite o Movimento da PECA:\n");
    printf("1. Esquerda\n2. Direita\n3. Cima\n4. Baixo\n5. Movimento do Cavalo - Cima/Direita\n6. Movimento do BISPO- Cima/Direita\n");
    scanf("%d", &direcao);

    printf("=======================================================\n"
        "==================MOVIMENTO DO PLAYER==================\n"
        "=======================================================\n");
            
    // Peca escolhida
    switch(peca) {
        case 1: nomeAtributo1 = "TORRE"; break;
        case 2: nomeAtributo1 = "BISPO"; break;
        case 3: nomeAtributo1 = "RAINHA"; break;
        case 4: nomeAtributo1 = "CAVALO"; break;
    }

    // Movimento de quantidade de casas.
    mov = casa;

    switch (casa) {  
        case 1:
            for(casa = 1; casa <= 1; casa++){
            printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;
        case 2:
            for(casa = 1; casa <= 2; casa++){
            printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;
        case 3:
            for(casa = 1; casa <= 3; casa++){
            printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;
        case 4:
            for(casa = 1; casa <= 4; casa++){
            printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;
        case 5:
            for(casa = 1; casa <= 5; casa++){
            printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;
        case 6:
            while (bispo--){
                for (int i = 0; i < 1; i++){
                    printf("Movimentou a(o) (%s)\n", nomeAtributo1);
                }
                printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;
        case 7:
            while (cavalo--){
                for (int i = 0; i < 2; i++){
                    printf("Movimentou a(o) (%s)\n", nomeAtributo1);
                }
                printf("Movimentou a(o) (%s)\n", nomeAtributo1);
            }
        break;

    default:
        if (casa < 1 || casa > 6) {
            printf("Quantidade de casas invalida! Deve ser entre 1 e 5.\n");
            return 1;
        }
        break;
    }

    // DIRECAO PARA A QUAL A PECA IRA
    switch (direcao) {
        case 1:
            if(direcao == 1){
                printf("%d casas para (ESQUERDA)!\n", mov);
            }   
        break;
        case 2: 
            if(direcao == 2){
                printf("%d casas para (DIREITA)!\n", mov);
            }   
        break;
        case 3: 
            if(direcao == 3){
                printf("%d casas para (CIMA)!\n", mov);
            }   
        break;
        case 4: 
            if(direcao == 4){
                printf("%d casas para (BAIXO)!\n", mov);
            }   
        break;
        case 5: 
            if(direcao == 5){
                printf("3 casas no total, (2) para (CIMA) e (1) para (DIREITA)\n");
            }   
        break;
        case 6: 
            if(direcao == 6){
                printf("2 casas no total, (1) para (CIMA) e (1) para (DIREITA)\n");
            }   
        break;
    default:
        if (direcao < 1 || direcao > 5) {
            printf("Direcao invalida! Deve ser entre 1 e 5.\n");
            return 1;
        }
        break;
    }


    printf("=======================================================\n");

    return 0;
}