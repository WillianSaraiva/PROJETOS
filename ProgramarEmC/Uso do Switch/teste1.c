#include <stdio.h>

int main(){
    int opcao;
    float saldo = 1000;

    printf("Escola uma opcao:\n");
    printf("1. Veridicar saldo\n");
    printf("2. Fazer deposito\n");
    printf("3. Fazer saque\n");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("O seu saldo e: R$ %.2f \n", saldo);
            break;
        case 2:
            printf("Digite o banco que voce deseja depositar: \n");
            printf("Digite a agencia que voce deseja depositar: \n");
            printf("Digite a conta que voce deseja depositar: \n");
            break;
        case 3:
            printf("Digite o calor a sacar: \n");
            break;
        default:
            printf("Opcao invalida!\n");
            break;
    }
 
    return 0;

}