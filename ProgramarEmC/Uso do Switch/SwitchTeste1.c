#include <stdio.h>

int main(){
    int variavel;

    printf("Digite um valor: \n");
    scanf("%d", &variavel);

    switch (variavel){
    case 1:
        // Codigo a ser executado se variavel == valor1
        printf("Codigo a ser executado se variavel == 1\n");
    break;
    case 2:
        // Codigo a ser executado se variavel == valor2
        printf("Codigo a ser executado se variavel == 2\n");
    break;
    default:
        // Codigo a ser executado se nenhum dos casos acima for verdadeiro
        printf("Codigo a ser executado se variavel nao for  1 ou  2\n");
    }
}