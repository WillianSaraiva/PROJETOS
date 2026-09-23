#include <stdio.h>

int main(){

    char *nomes[] = {"Joao", "Maria", "Jose"};
    float tempo[] = {12.5, 25.0, 40.0};
    int numFilhos[] = {5, 2, 6};
    char fuma[] = {'S', 'N', 'S'};

    printf("\n||NOMES\t\t||HORAS TRABALHADAS\t\t||NUM. FILHOS\t\t||FUMANTE\n");

    for(int i = 0; i < 3; i++){
        printf("\n%s\t\t %.1f \t\t\t\t  %d \t\t\t  %c", 
            nomes[i], tempo[i], numFilhos[i], fuma[i]);
    }

    printf("\n\n\n");
}