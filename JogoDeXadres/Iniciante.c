#include <stdio.h>

int main(){
    int direcao, casa, mov;
    int esq, dir, cima, baixo;

    // Bispo 5 casas diagonal direita;
    // Rainha 8 casas para a esquerda;
    // Torre 5 casas para frente;

    printf("Digite quantas casas a TORRE ira andar: (Limite de 5 casas)\n");
    scanf("%d", &casa);

    printf("Digite o Movimento da TORRE:\n");
    printf("1. Esquerda\n2. Direita\n3. Cima\n4. Baixo\n");
    scanf("%d", &direcao);

    printf("=======================================================\n"
        "==================MOVIMENTO DO PLAYER==================\n"
        "=======================================================\n");

    mov = casa;

    switch (casa) {  
        case 1:
            for(casa = 1; casa <= 1; casa++){
            printf("Movimentou a (TORRE)\n");
            }
        break;
        case 2:
            for(casa = 1; casa <= 2; casa++){
            printf("Movimentou a (TORRE)\n");
            }
        break;
        case 3:
            for(casa = 1; casa <= 3; casa++){
            printf("Movimentou a (TORRE)\n");
            }
        break;
        case 4:
            for(casa = 1; casa <= 4; casa++){
            printf("Movimentou a (TORRE)\n");
            }
        break;
        case 5:
            for(casa = 1; casa <= 5; casa++){
            printf("Movimentou a (TORRE)\n");
            }
        break;

    default:
        printf("Opcao incorreta\n");
        break;
    }

    switch (direcao) {
        case 1:
            if(direcao == 1){
                printf("%d casas para a (ESQUERDA)!\n", mov);
            }   
        break;
        case 2: 
            if(direcao == 2){
                printf("%d casas para a (DIREITA)!\n", mov);
            }   
        break;
        case 3: 
            if(direcao == 3){
                printf("%d casas para a (CIMA)!\n", mov);
            }   
        break;
        case 4: 
            if(direcao == 4){
                printf("%d casas para a (BAIXO)!\n", mov);
            }   
        break;
    default:
            printf("Opcao incorreta\n");
        break;
    }


    printf("=======================================================\n");

    return 0;
}