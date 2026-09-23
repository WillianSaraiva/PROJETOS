#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int opcao, regras;
    int numeroSecreto, palpite;

    printf("Menu Principal\n");
    printf("1. Iniciar Jogo\n");
    printf("2. Ver Regras\n");
    printf("3. Sair\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
        case 1:
            srand(time(0)); // INICIA O GERADOR DE NUMERO ALEATORIO
            numeroSecreto = rand() % 10;
            printf("Digite um numero de 0 a 9: ");
            scanf("%d", &palpite);
            printf("Numero Secreto: %d\n", numeroSecreto);
            if (numeroSecreto == palpite)
            {
                printf("Voce acertou!\n");
            } else {
                printf("Voce errrou!");
            }
            break;
        case 2:
            printf("Explicacao das regras!\n");
            printf("Digite a opcao relacionada as regras do jogo!\n");
            scanf("%d", &regras);
            switch (regras)
            {
            case 1:
                printf("Regra 1\n");
                break;
            case 2:
                printf("Regra 2\n");
                break;
            case 3:
                printf("Regra 3\n");
                break;                
            }
            break;
        case 3:
            printf("Saindo do jogo!\n");
            break;
        default:
            printf("Opcao incorreta!\n");
            break;
    }

    return 0;
    
}