#include <stdio.h>

int main(){
    float portU, portD, portT, portQ, mediaF;

    printf("Qual a nota do 1 Corte Temporal de (Portugues)?\n");
    scanf("%f", &portU);

    printf("Qual a nota do 2 Corte Temporal de (Portugues)?\n");
    scanf("%f", &portD);

    printf("Qual a nota do 3 Corte Temporal de (Portugues)?\n");
    scanf("%f", &portT);

    printf("Qual a nota do 4 Corte Temporal de (Portugues)?\n");
    scanf("%f", &portQ);

    mediaF = (portU + portD + portT + portQ) / 4;

    printf("===============================\n"
        "--------BOLETIM ESCOLAR--------\n"
        "===============================\n");

    printf("Portugues 1 Corte Temporal: %.2f\n"
        "Portugues 2 Corte Temporal: %.2f\n"
        "Portugues 3 Corte Temporal: %.2f\n"
        "Portugues 4 Corte Temporal: %.2f\n"
        "Media Final em (Portugues): %.2f\n",
        portU, portD, portT, portQ, mediaF);  

    if(mediaF >= 6){
        printf("Aluno aprovado!");
    } else{
        printf("Aluno reprovado!");
    }

    return 0;
}