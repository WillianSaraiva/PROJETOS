#include <stdio.h>

int main(){
    /*
    Incremento (++)
    Pré-Incremento ++a
    Pós-Incremento a++
    Decremento (--)
    Pré-Decremento --a
    Pós-Decremento a--    
    */

    int numero1 = 1, resultado;

    printf("Antes Incremento: %d\n", numero1);
    //Numero1 = Numero1 + 1;
    //numero1 += 1, Atribuicao;
    //Pos-incremento:
    //resultado = numero1; resultado recebe o numero1;
    //numero++; depois o numero1 faz o incremento;
    resultado = numero1++;
    //printf("Apos Incremento: %d\n", numero1);
    printf("Apos o Pos-Incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    resultado = ++numero1;
    printf("Apos o Pre-incremento - Numero 1: %d - Resultado: %d\n", numero1, resultado);

    //Numero1 = Numero1 - 1;
    //Numero1 -= 1, Atribuicao;
    resultado = numero1 --;
    printf("Apos o Pos-decremento - Numero 1: %d - Resultado: %d\n", numero1,resultado);

    resultado = --numero1;
    printf("Apos o Pre-decremento - Numero 1: %d - Resultado: %d\n", numero1,resultado);

}