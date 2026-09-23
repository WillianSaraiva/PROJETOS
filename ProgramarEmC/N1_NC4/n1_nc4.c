#include <stdio.h>

int main(void){
    int age = 25;
    float height = 1.75;
    char option = 'S';
    char name[20] = "Willian";
    
    printf("The age %s is: %d \n", name, age);
    printf("The height is: %g\n", height);
    printf("The option is: %c\n", option);
    
    


    /*
    printf("%formato1 %formato2 %formato3", variavel1, variavel2, variavel3)

    %d: Imprime um inteiro no formato.
    %i: Equivalente a %d.
    %f: Ponto flutuante (float / double) em notação decimal.
    %e: Ponto flutuante em notação científica.
    %g: Usa o formato %f ou %e (o que for mais curto).
    %c: Um único caractere (char).
    %s: Cadeia de caracteres (texto/string).
    %x: Hexadecimal sem sinal (letras minúsculas/maiúsculas).
    %o: Octal sem sinal.
    %p: Endereço de ponteiro.
    %%: Imprime o próprio símbolo de porcentagem.
    */
}