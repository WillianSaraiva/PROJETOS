#include <stdio.h>

int main(){
    int numeroSinal = 3000000000; // Este valor excede o limite de um int normal
    unsigned int numeroSemSinal = 3000000000;

    printf("Numero com sinal: %d\n", numeroSinal);
    printf("Numero sem sinal: %u\n", numeroSemSinal);

    // unsigned - quando sabe que nunca sera valores negativos permitindo uma faixa de numeros positivos maior.
    return 0;

}