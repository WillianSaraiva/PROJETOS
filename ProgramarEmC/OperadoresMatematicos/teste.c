#include <stdio.h>

int main(){
    int resultado, soma, a = 10, b = 5, c = 8;

    soma = a + b;

    //printf("A soma de: %d\n", soma);

    a++;
    b--;

    resultado = a++, resultado = --b;
    printf("Apos Pos-incremento: %d - Letra a: %d e Apos Pre-decremento: %d - Letra b: %d\n", resultado, a, b);
}