#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    int numeroJogador, numeroComputador, resultado;
    char tipoComparacao;

    // Gerar numero aleatorio
    srand(time(0));
    numeroComputador = rand() % 100 + 1; // Numero entre 1 e 100

    // Inicio do jogo
    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Voce deve escolher um numero e o tipo de comparacao.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. Igual\n");

    printf("Escola a comparacao: ");
    scanf("%c", &tipoComparacao);

    printf("Digite seu numero (entre 1 e 100):");
    scanf("%d", &numeroJogador);

    // Exibir numero do computador
    //printf("O numero do compuitador e: %d\n", numeroComputador);

    switch (tipoComparacao){
        case 'M':
        case 'm':
            printf("Voce escolheu a opcao maior!\n");
            resultado = numeroJogador > numeroComputador ? 1 : 0;
            break;
        case 'N':
        case 'n':
            printf("Voce escolheu a opcao menor!\n");
            resultado = numeroJogador < numeroComputador ? 1 : 0;
            break;
        case 'I':
        case 'i':
            printf("Voce escolheu a opcao igual!\n");
            resultado = numeroJogador == numeroComputador ? 1 : 0;
            break;
        default:
            printf("Opcao de jogo invalida\n");
            break;
    }

    printf("O numero do compuitador e: %d e o do jogador e: %d\n", numeroComputador, numeroJogador);

    if (resultado == 1)
    {
        printf("Parabens, voce venceu!\n");
    } else {
        printf("Infelizmente, voce perdeu!\n");
    }
    
}