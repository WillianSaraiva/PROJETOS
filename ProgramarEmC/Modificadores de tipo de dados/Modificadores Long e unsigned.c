#include <stdio.h>

int main(){
    unsigned long int numeroGrandePositivo = 4000000000;
    unsigned int numeroPositivo = 4000000000;
    long int numeroGrande = 4000000000; // Para tratar esse valor tem que ser lon long int %lld
    int numero = 4000000000;

    printf("Numero positivo grande: %lu\n", numeroGrandePositivo);
    printf("Numero positivo: %u\n", numeroPositivo);
    printf("Numero grande: %ld\n", numeroGrande);
    printf("Numero: %d\n", numero);

    return 0;
    
}