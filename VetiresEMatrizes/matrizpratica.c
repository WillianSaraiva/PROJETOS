#include <stdio.h>

int main(){

    char *titulos[4] = {"Nome", "Nota 1", "Nota 2", "Media"};
    char nomes[2][50];
    int nota[2][3];

    for(int i = 0; i < 2; i++){
        printf("Digite um nome: \n");
        scanf("%s", nomes[i]);
    }

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Digite a nota: \n");
            scanf("%d", &nota[i][j]);
        }
        nota[i][2] = (nota[i][0]) + nota[i][1] / 2;
    }
    printf("\n");

    for(int i = 0; i < 4; i++){
        printf("|||%-12s ", titulos[i],"\t\t");
    }
    printf("\n");

    for(int i = 0; i < 2; i++){
        printf("|||%-12s ", nomes[i]);
        for(int j = 0; j < 3; j++){
            printf("|||%d\t\t", nota[i][j], "\t\t");
        }
        printf("\n");
    }

    return 0;

}







    /*
    for(int i = 0; i < 4; i++){
        printf("||%s  ", titulos[i],"\t\t");
    }
    printf("\n\n");

    for(int i = 0; i < 2; i++){
        printf("Digite um nome: \n");
        scanf("%s", nomes[i]);
    }

    for(int j = 0; j < 2; j++){
        printf("||%s", nomes[j]);
    }

    for(int i = 0; i < 2; j++){
        for(int j = 0; j < 2; j++){
            printf("Digite a nota: \n");
            scanf("%d", nota[i][j]);
        }
        nota[i][2] = (nota[i][0]) + nota[i][1] / 2;
    }
    printf("\n\n");

    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 3; j++){
            printf("|||%d", nota[i][j], "\t\t");
        }
        printf("\n");
    }*/
