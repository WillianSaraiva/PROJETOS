#include <stdio.h>

int main() {
    int dados[3], valor1, valor2, valor3;

    printf("Por favor, digite um valor: \n");
    scanf("%d", &dados[0]);

    printf("Por favor, digite um valor: \n");
    scanf("%d", &dados[1]);

    printf("Por favor, digite um valor: \n");
    scanf("%d", &dados[2]);

    valor1 = dados[0];
    valor2 = dados[1];
    valor3 = dados[2];

    printf("O valor1: %d, valor2: %d, valor3: %d", dados[0], dados[1], dados[2]);
    
    return 0;
}