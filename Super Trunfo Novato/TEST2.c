#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //===========================================
    // 1. DECLARAÇÃO DE VARIÁVEIS
    //===========================================

    //----- CARTA 1 -----
    unsigned int populacao1; 
    int pontosTuristicos1; 
    float areaEmSqkm1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
    char estado1[3];                                   
    char codigoCarta1[4], nomeDaCidade1[50];     

    //----- CARTA 2 -----
    unsigned int populacao2; 
    int pontosTuristicos2;
    float areaEmSqkm2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
    char estado2[3];                                   
    char codigoCarta2[4], nomeDaCidade2[50];     

    //----- VARIÁVEIS PARA O COMBATE (NÍVEL MESTRE) -----
    int opcao1, opcao2;
    float val1_carta1 = 0, val1_carta2 = 0;
    float val2_carta1 = 0, val2_carta2 = 0;
    char *nomeAtributo1 = "";
    char *nomeAtributo2 = "";

    //===========================================
    // 2. ENTRADA DE DADOS E CÁLCULOS - CARTA 1
    //===========================================
    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite a UF do Estado (Ex: SP):\n");
    scanf(" %2s", estado1); // Corrigido: Strings não precisam do '&' comercial no scanf

    printf("Digite o Codigo da Carta (ex: A01, B02):\n");
    scanf("%s", codigoCarta1);

    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nomeDaCidade1); // Corrigido: O %[^\n] permite ler nomes compostos (com espaços)

    printf("Digite o numero de habitantes:\n");
    scanf("%u", &populacao1);

    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &areaEmSqkm1);

    printf("Digite o PIB da Cidade (em bilhoes):\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos1);

    // Cálculos - Carta 1
    densidadePopulacional1 = (float) populacao1 / areaEmSqkm1;
    pibPerCapita1 = (pib1 * 1000000000.0) / (float) populacao1;
    superPoder1 = (float) populacao1 + areaEmSqkm1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

    //===========================================
    // 3. ENTRADA DE DADOS E CÁLCULOS - CARTA 2
    //===========================================
    printf("\n--- Cadastro da Carta 2 ---\n");

    printf("Digite a UF do Estado (Ex: RJ):\n");
    scanf(" %2s", estado2);

    printf("Digite o Codigo da Carta (ex: A01, B02):\n");
    scanf("%s", codigoCarta2);

    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nomeDaCidade2);

    printf("Digite o numero de habitantes:\n");
    scanf("%u", &populacao2);

    printf("Digite a area da cidade em km quadrados:\n");
    scanf("%f", &areaEmSqkm2);

    printf("Digite o PIB da Cidade (em bilhoes):\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos da cidade:\n");
    scanf("%d", &pontosTuristicos2);

    // Cálculos - Carta 2
    densidadePopulacional2 = (float) populacao2 / areaEmSqkm2;
    pibPerCapita2 = (pib2 * 1000000000.0) / (float) populacao2;
    superPoder2 = (float) populacao2 + areaEmSqkm2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

    //===========================================
    // 4. ESCOLHA DOS ATRIBUTOS (MENUS DINÂMICOS)
    //===========================================
    printf("\n========================================================\n");
    printf("         COMBATE SUPER TRUNFO - DOIS ATRIBUTOS          \n");
    printf("========================================================\n");
    
    printf("Escolha o PRIMEIRO atributo para a comparacao:\n");
    printf("1. Populacao\n2. Area em KM Quadrados\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Pib per Capita\n7. Super Poder\n");
    printf("Sua opcao: ");
    scanf("%d", &opcao1);

    // Salva os valores escolhidos do atributo 1
    switch (opcao1) {
        case 1: nomeAtributo1 = "Populacao"; val1_carta1 = (float)populacao1; val1_carta2 = (float)populacao2; break;
        case 2: nomeAtributo1 = "Area"; val1_carta1 = areaEmSqkm1; val1_carta2 = areaEmSqkm2; break;
        case 3: nomeAtributo1 = "PIB"; val1_carta1 = pib1; val1_carta2 = pib2; break;
        case 4: nomeAtributo1 = "Pontos Turisticos"; val1_carta1 = (float)pontosTuristicos1; val1_carta2 = (float)pontosTuristicos2; break;
        case 5: nomeAtributo1 = "Densidade Populacional"; val1_carta1 = densidadePopulacional1; val1_carta2 = densidadePopulacional2; break;
        case 6: nomeAtributo1 = "Pib per Capita"; val1_carta1 = pibPerCapita1; val1_carta2 = pibPerCapita2; break;
        case 7: nomeAtributo1 = "Super Poder"; val1_carta1 = superPoder1; val1_carta2 = superPoder2; break;
        default: printf("Opcao invalida no primeiro atributo!\n"); return 1;
    }

    // Oculta dinamicamente através de um SWITCH a opção já escolhida
    printf("\nEscolha o SEGUNDO atributo para a comparacao:\n");
    switch (opcao1) {
        case 1: printf("2. Area em KM Quadrados\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Pib per Capita\n7. Super Poder\n"); break;
        case 2: printf("1. Populacao\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Pib per Capita\n7. Super Poder\n"); break;
        case 3: printf("1. Populacao\n2. Area em KM Quadrados\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Pib per Capita\n7. Super Poder\n"); break;
        case 4: printf("1. Populacao\n2. Area em KM Quadrados\n3. PIB\n5. Densidade Populacional\n6. Pib per Capita\n7. Super Poder\n"); break;
        case 5: printf("1. Populacao\n2. Area em KM Quadrados\n3. PIB\n4. Pontos Turisticos\n6. Pib per Capita\n7. Super Poder\n"); break;
        case 6: printf("1. Populacao\n2. Area em KM Quadrados\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n7. Super Poder\n"); break;
        case 7: printf("1. Populacao\n2. Area em KM Quadrados\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Pib per Capita\n"); break;
    }
    printf("Sua opcao: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("ERRO: Voce nao pode escolher o mesmo atributo duas vezes!\n");
        return 1; // Encerra com erro
    }

    // Salva os valores escolhidos do atributo 2
    switch (opcao2) {
        case 1: nomeAtributo2 = "Populacao"; val2_carta1 = (float)populacao1; val2_carta2 = (float)populacao2; break;
        case 2: nomeAtributo2 = "Area"; val2_carta1 = areaEmSqkm1; val2_carta2 = areaEmSqkm2; break;
        case 3: nomeAtributo2 = "PIB"; val2_carta1 = pib1; val2_carta2 = pib2; break;
        case 4: nomeAtributo2 = "Pontos Turisticos"; val2_carta1 = (float)pontosTuristicos1; val2_carta2 = (float)pontosTuristicos2; break;
        case 5: nomeAtributo2 = "Densidade Populacional"; val2_carta1 = densidadePopulacional1; val2_carta2 = densidadePopulacional2; break;
        case 6: nomeAtributo2 = "Pib per Capita"; val2_carta1 = pibPerCapita1; val2_carta2 = pibPerCapita2; break;
        case 7: nomeAtributo2 = "Super Poder"; val2_carta1 = superPoder1; val2_carta2 = superPoder2; break;
        default: printf("Opcao invalida no segundo atributo!\n"); return 1;
    }

    //===========================================
    // 5. CÁLCULOS DOS RESULTADOS E SOMAS
    //===========================================
    
    // OPERADOR TERNÁRIO: Se for densidade (5) inverte o sinal para o menor (<). Se não, o maior ganha (>).
    // (1 = Carta 1 Vence, 2 = Carta 2 Vence, 0 = Empate)
    int vencedor1 = (opcao1 == 5) ? ((val1_carta1 < val1_carta2) ? 1 : ((val1_carta1 > val1_carta2) ? 2 : 0)) 
                                  : ((val1_carta1 > val1_carta2) ? 1 : ((val1_carta1 < val1_carta2) ? 2 : 0));
                                  
    int vencedor2 = (opcao2 == 5) ? ((val2_carta1 < val2_carta2) ? 1 : ((val2_carta1 > val2_carta2) ? 2 : 0)) 
                                  : ((val2_carta1 > val2_carta2) ? 1 : ((val2_carta1 < val2_carta2) ? 2 : 0));

    // Soma das Duas Propriedades
    float somaCarta1 = val1_carta1 + val2_carta1;
    float somaCarta2 = val1_carta2 + val2_carta2;

    int vencedorSoma = (somaCarta1 > somaCarta2) ? 1 : ((somaCarta1 < somaCarta2) ? 2 : 0);

    // Soma das Duas Propriedades
    printf("\n========================================================\n");
    printf("                     RESULTADO FINAL                    \n");
    printf("========================================================\n");
    printf("Competidores: %s (%s) vs %s (%s)\n\n", nomeDaCidade1, estado1, nomeDaCidade2, estado2);

    // Atributo 1
    printf("-> Atributo 1 (%s):\n", nomeAtributo1);
    printf("Valor Carta 1: %.2f\nValor Carta 2: %.2f\n", val1_carta1, val1_carta2);
    if (vencedor1 == 1) printf("Vencedor parcial: %s\n\n", nomeDaCidade1);
    else if (vencedor1 == 2) printf("Vencedor parcial: %s\n\n", nomeDaCidade2);
    else printf("Vencedor parcial: Empate!\n\n");

    // Atributo 2
    printf("-> Atributo 2 (%s):\n", nomeAtributo2);
    printf("Valor Carta 1: %.2f\nValor Carta 2: %.2f\n", val2_carta1, val2_carta2);
    if (vencedor2 == 1) printf("Vencedor parcial: %s\n\n", nomeDaCidade1);
    else if (vencedor2 == 2) printf("Vencedor parcial: %s\n\n", nomeDaCidade2);
    else printf("Vencedor parcial: Empate!\n\n");

    // Soma e Decisão
    printf("-> SOMA DOS ATRIBUTOS:\n");
    printf("Soma Carta 1: %.2f\n", somaCarta1);
    printf("Soma Carta 2: %.2f\n", somaCarta2);

    printf("\n========================================================\n");
    if (vencedorSoma == 1) {
        printf("VENCEDOR DA RODADA: %s!\n", nomeDaCidade1);
    } else if (vencedorSoma == 2) {
        printf("VENCEDOR DA RODADA: %s!\n", nomeDaCidade2);
    } else {
        printf("RESULTADO: Empate!\n");
    }
    printf("========================================================\n\n");

    return 0;
}