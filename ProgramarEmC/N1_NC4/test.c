#include <stdio.h>

int main(void) {
    // Declaração das variáveis
    char estado;           // Recebe uma única letra ('A' a 'H')
    char codigo_carta[4];  // Recebe a letra + 2 dígitos + '\0' (ex: "A01")

    // 1. Leitura do Estado
    printf("Digite a letra do Estado (A a H): ");
    scanf(" %c", &estado); // O espaço antes de %c limpa caracteres invisíveis do teclado

    // 2. Leitura do Código da Carta
    printf("Digite o Código da Carta (ex: A01, B03): ");
    scanf("%s", codigo_carta); // Strings não precisam do símbolo '&' no scanf

    // Exibição dos dados digitados
    printf("\n--- DADOS DA CARTA ---\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);

    return 0;
}