#include <stdio.h>

int main(){

    int matriz1[2][2], matriz2[2][2], matriz3[2][2];

    printf("Preencha a matriz 1:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }
    
    printf("Preencha a matriz 2: \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Posicao [%d][%d]: ", i, j);
            scanf("%d", &matriz2[i][j]);
        }
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            matriz3[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }

    printf("\nResultado da Soma da Matriz:\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("[%d]", matriz3[i][j]);
        }
        printf("\n");
    }

    return 0;
    
}