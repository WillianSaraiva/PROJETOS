#include <stdio.h>

int main(){

    //int a = 0, numero, i;
    int numero, i;

    /*while (a <= 10) {
        if(a % 2 == 0){
            printf("O numero %d e par!\n", a);
        }
        a++;
    }*/

    /*do{
        printf("Digite sua senha!\n");
        scanf("%d", &numero);

        if(numero == 147258){
            printf("Login efetuado com sucesso!\n");
        } else {
            printf("Senha incorreta, digite novamente!\n");
        }

    } while (numero != 147258);

    printf("Aproveite seu acesso!");
    */
    
    // Calculadora
    printf("Digite um numero para clacularmos a tabuada...:\n");
    scanf("%d", &numero);

    for(i = 0; i <= 10; i++){
        printf("%d x %d = %d\n", i, numero, i * numero);
    }

    return 0;
}