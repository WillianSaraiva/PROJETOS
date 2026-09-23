#include <stdio.h>

int main(){
    float x = 5.5;
    float y = 2.2;
    float soma = x + y;
    float diferenca = x - y;
    float produto = x * y;
    float quociente = x / y; //Divisao de pon to flutuante , //Diferenca do float para o double e a precisao.

    printf("Soma: %.2f\n", soma);
    printf("Diferenca: %.2f\n", diferenca);
    printf("Produto: %.2f\n", produto);
    printf("Quociente: %.2f\n", quociente);
 
    return 0;

}