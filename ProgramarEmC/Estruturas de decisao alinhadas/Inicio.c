#include <stdio.h>

int main(){

    int idade;
    float renda;

    /*
    programa que verifica se uma pessoa esta qualidicada para um
    desconto especial com base na idade e na renda mensal.
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
    uma renda mensal de abaixo de 2000*/

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    if (idade <= 18 || idade >= 60)
    {
        if (renda < 2000)
        {
          printf("Voce tem direito ao desconto\n");
        } else {
          printf("Voce nao tem direito ao desconto devido a renda\n");
        }

    } else {
        printf("Voce nao atende aos criterios devido a idade!\n");
    }

    return 0;

}