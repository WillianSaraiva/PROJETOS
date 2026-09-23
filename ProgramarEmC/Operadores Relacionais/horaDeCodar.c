#include <stdio.h>

int main(){
    // Declarar variaveis Produto, u i estoque, double valor unitario, double
    // u i quantidade minima
    char produtoA[30] = "Produto A";
    unsigned int estoqueA = 1000;
    unsigned int estoqueMinimoA = 500;
    float valorA = 10.50;
    double valorTotalA;
    int resultadoA;

    char produtoB[30] = "Produto B";
    unsigned int estoqueB = 2000; 
    unsigned int estoqueMinimoB = 2500;
    float valorB = 20.40;
    double valorTotalB;
    int resultadoB;

    // Exibir as informacoes dos produtos
    printf("Produto %s tem estoque %u unidades e o valor unitario e R$ %.2f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem estoque %u unidades e o valor unitario e R$ %.2f\n", produtoB, estoqueB, valorB);

    // Comparacoes com o valor minimo de estoque
    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("O produto %s tem estoque > que o estoque minimo %d\n", produtoA, resultadoA);
    printf("O produto %s tem estoque > que o estoque minimo %d\n", produtoB, resultadoB);

    // Comparacoes entre os valores totais dos produtos
    printf("Valor total de A (R$ %.2f) e maior que o valor total de B (R$ %.2f)? %d\n", 
        estoqueA * valorA, estoqueB * valorB, (estoqueA * valorA) > (estoqueB * valorB));

    return 0;
}