#include <stdio.h>

int main(){

    int a = 10;
    //No C o valor 0 = Falso, qualquer coisa diferente de 0 e verdadeiro.

    if (!a) { //(!(a > 0));
        printf("A variavel negativa.\n");
        //printf("a nao e um numero positivo\n")        
    } else {
        printf("A variavel e positiva.\n");
    }
}
