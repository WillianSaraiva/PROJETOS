#include <stdio.h>

int main(){
    
    int a = -10, b = 5;

    if(a > 0 && b > 0){
        printf("Os dois numeros sao positivos\n");
    } else {
        printf("Pelo menos um dos numeros e negativo\n");
    }

    return 0;
    /*
    1 = Verdade (Certo).
    0 = Falso (Errado).

    E Logico (&&) - Se A e B forem 1 o resutado é 1, caso A ou B for 0 o resultado é 0.
    OU Logico (||) - Se pelo menos A ou B for 1 resultado é 1, só será falso quando A e B forem 0.
    NAO Logico (!) - Inverte o valor, se a variavel A é 1 vira 0.(Inverte a variavel)
    */
}