#include <stdio.h>

int main(){
    float temp, umid;
    unsigned int est, estMin = 1000;

    printf("Entre com a temperatura: \n");
    scanf("%f", &temp);
    printf("Entre com a umidade: \n");
    scanf("%f", &umid);
    printf("Entre coom o estoque: \n");
    scanf("%u", &est);

    if(temp > 30){
        printf("Temperatura esta alta\n");
    } else {
        printf("Temperatura esta dentro dos parametros\n");
    }

    if(umid > 50){
        printf("Umidade elevada \n");
    } else {
        printf("Umidade esta dentro dos parametros\n");
    }

    if(est > estMin){
        printf("Estoque abaixo do minimo\n");
    } else {
        printf("Estoque normal\n");
    }

    return 0;
    
}