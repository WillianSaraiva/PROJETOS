#include <stdio.h>

int main(){

    char letras[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabela[10][10] = {0};

    printf("  ");
    for(int j = 0; j < 10; j++){
        printf("%d ", j + 1);
    }
    printf("\n");

    for(int i = 0; i < 10; i++){
        printf("%c ", letras[i]);
        
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabela[i][j]);
        }
        printf("\n");
    }

    return 0;
}