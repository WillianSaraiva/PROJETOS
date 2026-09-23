#include <stdio.h>

int main(){
    int numeroNormal = 2147483647; // Valor maximo de int
    long long int numeroGrande = 2147483647;

    printf("Numero regular (int): %d\n", numeroNormal);
    printf("Numero grande (long int): %ld\n", numeroGrande);

    numeroGrande = 2147483648; // Valor maior que o maximo de int
    printf("Numero grande atualizado (long int): %lld\n", numeroGrande);

    // Long - Ira usar quando precisar trabalhar com numeros inteiros muito grande, fora do alcance de um inteiro normal.
    // Com valor em dinheiro e uma opcao.
    return 0;

}