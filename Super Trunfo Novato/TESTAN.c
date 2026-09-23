#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
   //===========================================
   //1. DECLARÇÃO DE VARIÁVEIS
   //===========================================

   //----- CARTA 1 -----
   unsigned int populacao1; 
   int pontosTuristicos1; 
   float areaEmSqkm1, pib1, densidadePopulacional1, pibPerCapita1, superPoder1;
   char estado1[3];                                    // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
   char codigoCarta1[4], nomeDaCidade1[50];     // Recebe a letra + 2 dígitos + '\0' (ex: "A01") e Guarda o nome da cidade.

   //----- CARTA 2 -----
   unsigned int populacao2; 
   int pontosTuristicos2, resultado2;
   float areaEmSqkm2, pib2, densidadePopulacional2, pibPerCapita2, superPoder2;
   char estado2[3];                                    // Guarda a primeira letra exemplo: 'A', 'B', 'C', etc.
   char codigoCarta2[4], nomeDaCidade2[50];     // Recebe a letra + 2 dígitos + '\0' (ex: "A01") e Guarda o nome da cidade.

   //----- COMBATE -----
   int resultadoPop, resultadoArea, resultadoPib, resultadoTuristico, resultadoDensidade, resultadoCapita, resultadoSuper;
   const char *vencedorPop, *vencedorArea, *vencedorPib, *vencedorTuristico, *vencedorDensidade, *vencedorCapita, *vencedorSuper, *vencedorFinal;

   // ----- COMBATE DE ATRIBUTOS-----
   int opcao1, opcao2;
   float val1_carta1 = 0, val1_carta2 = 0;
   float val2_carta1 = 0, val2_carta2 = 0;
   char *nomeAtributo1 = "";
   char *nomeAtributo2 = "";

   //===========================================
   //2. ENTRADA DE DADOS E CALCULOS - CARTA 1
   //===========================================
   printf("Carta 1\n");

   // Leitura do Estado:
   printf("Digite a UF do Estado:\n");
   scanf(" %2s", &estado1);

   // Leitura do Código da Carta:
   printf("Digite o Codigo da Carta (ex: A01, B02):\n");
   scanf("%s", codigoCarta1);

   // Leitura do Nome da Cidade:
   printf("Digite o Nome da Cidade:\n");
   scanf("%s", nomeDaCidade1);

   // Leitura da População:
   printf("Digite o numero de habitantes:\n");
   scanf("%u",&populacao1);

   // Leitura da area em km²:
   printf("Digite a area da cidade em km quadrados:\n");
   scanf("%f", &areaEmSqkm1);

   // Leitura do PIB:
   printf("Digite o PIB da Cidade:\n");
   scanf("%f", &pib1);

   // Leitura do Numero de Pontos Turisticos:
   printf("Digite o numero de pontos turisticos da cidade:\n");
   scanf("%d", &pontosTuristicos1);

   // Calculo da Media:
   densidadePopulacional1 = (float) populacao1 / areaEmSqkm1;
   pibPerCapita1 = pib1 * 1000000000.0 / (float) populacao1;

   //Calculo do Super Poder:
   superPoder1 = (float) populacao1 + areaEmSqkm1 + (pib1 * 1000000000.0) + pontosTuristicos1 + pibPerCapita1 + (1.0 / densidadePopulacional1);

   //===========================================
   //3. ENTRADA DE DADOS E CALCULOS - CARTA 1
   //===========================================
   printf("Carta 2\n");

   // Leitura do Estado:
   printf("Digite a UF do Estado:\n");
   scanf(" %2s", &estado2);

   // Leitura do Código da Carta:
   printf("Digite o Codigo da Carta (ex: A01, B02):\n");
   scanf("%s", codigoCarta2);

   // Leitura do Nome da Cidade:
   printf("Digite o Nome da Cidade:\n");
   scanf("%s", nomeDaCidade2);

   // Leitura da População:
   printf("Digite o numero de habitantes:\n");
   scanf("%u",&populacao2);

   // Leitura da area em km²:
   printf("Digite a area da cidade em km quadrados:\n");
   scanf("%f", &areaEmSqkm2);

   // Leitura do PIB:
   printf("Digite o PIB da Cidade:\n");
   scanf("%f", &pib2);

   // Leitura do Numero de Pontos Turisticos:
   printf("Digite o numero de pontos turisticos da cidade:\n");
   scanf("%d", &pontosTuristicos2);

   // Calculo da Media:
   densidadePopulacional2 = (float) populacao2 / areaEmSqkm2;
   pibPerCapita2 = pib2 * 1000000000.0 / (float) populacao2;

   //Calculo do Super Poder:
   superPoder2 = (float) populacao2 + areaEmSqkm2 + (pib2 * 1000000000.0) + pontosTuristicos2 + pibPerCapita2 + (1.0 / densidadePopulacional2);

   //===========================================
   //4. RETORNO DE DADOS AO USUARIO
   //===========================================
   printf("--------------------------------------\n"
      "-------------Super Trunfo-------------\n"
      "--------------------------------------\n");

   printf( "Carta 1\n"
      "Super Poder 1: %.2f\n"
      "Estado: %2s\n" 
      "Codigo: %s\n" 
      "Nome da Cidade: %s\n" 
      "Populacao: %u\n" 
      "Area: %.2f km quadrados\n" 
      "PIB: %.2f bilhoes de reais\n"
      "Numero de Pontos Turisticos: %d\n"
      "Densidade Populacional: %.2f hab/km quadrado\n" //Media1
      "PIB per Capita: %.2f reais\n", //Media1
      superPoder1, estado1, codigoCarta1, nomeDaCidade1, populacao1, areaEmSqkm1,
      pib1, pontosTuristicos1, densidadePopulacional1, pibPerCapita1);

   printf("---------------------------------------------------------\n");

   printf( "Carta 2\n"
      "Super Poder 2: %.2f\n" 
      "Estado: %2s\n" 
      "Codigo: %s\n" 
      "Nome da Cidade: %s\n" 
      "Populacao: %u\n" 
      "Area: %.2f km quadrados\n" 
      "PIB: %.2f bilhoes de reais\n"
      "Numero de Pontos Turisticos: %d\n"
      "Densidade Populacional: %.2f hab/km quadrado\n"//Media2
      "PIB per Capita: %.2f reais\n", //Media2
      superPoder2, estado2, codigoCarta2, nomeDaCidade2, populacao2, areaEmSqkm2,
      pib2, pontosTuristicos2, densidadePopulacional2, pibPerCapita2);

    //===========================================
    //5. CALCULO DO COMBATE
    //===========================================
    
   if(populacao1 == populacao2){
      vencedorPop = "Houve Empate";
      resultadoPop = 0;
   } else if(populacao1 > populacao2) {
      vencedorPop = "Carta 1 venceu";
      resultadoPop = 1;
   } else {
      vencedorPop = "Carta 2 venceu";
      resultadoPop = 0;
   }

   if(areaEmSqkm1 == areaEmSqkm2){
      vencedorArea = "Houve Empate";
      resultadoArea = 0;
   } else if(areaEmSqkm1 > areaEmSqkm2) {
      vencedorArea = "Carta 1 venceu";
      resultadoArea = 1;
   } else {
      vencedorArea = "Carta 2 venceu";
      resultadoArea = 0;
   }

   if(pib1 == pib2){
      vencedorPib = "Houve Empate";
      resultadoPib = 0;
   } else if(pib1 > pib2) {
      vencedorPib = "Carta 1 venceu";
      resultadoPib = 1;
   } else {
      vencedorPib = "Carta 2 venceu";
      resultadoPib = 0;
   }

   if(pontosTuristicos1 == pontosTuristicos2){
      vencedorTuristico = "Houve Empate";
      resultadoTuristico = 0;
   } else if(pontosTuristicos1 > pontosTuristicos2) {
      vencedorTuristico = "Carta 1 venceu";
      resultadoTuristico = 1;
   } else {
      vencedorTuristico = "Carta 2 venceu";
      resultadoTuristico = 0;
   }

   if(densidadePopulacional1 == densidadePopulacional2){
      vencedorDensidade = "Houve Empate";
      resultadoDensidade = 0;
   } else if(1.0 / densidadePopulacional1 < 1.0 / densidadePopulacional2) {
      vencedorDensidade = "Carta 1 venceu";
      resultadoDensidade = 1;
   } else {
      vencedorDensidade = "Carta 2 venceu";
      resultadoDensidade = 0;
   }

   if(pibPerCapita1 == pibPerCapita2){
      vencedorCapita = "Houve Empate";
      resultadoCapita = 0;
   } else if(pibPerCapita1> pibPerCapita2) {
      vencedorCapita = "Carta 1 venceu";
      resultadoCapita = 1;
   } else {
      vencedorCapita = "Carta 2 venceu";
      resultadoCapita = 0;
   }

   if(superPoder1 == superPoder2){
      vencedorSuper = "Houve Empate";
      resultadoSuper = 0;
   } else if(superPoder1 > superPoder2) {
      vencedorSuper = "Carta 1 venceu";
      resultadoSuper = 1;
   } else {
      vencedorSuper = "Carta 2 venceu";
      resultadoSuper = 0;
   }

   //===========================================
   //6. COMBATE
   //===========================================
   printf("--------------------------------------\n"
      "---------------COMABTE----------------\n"
      "--------------------------------------\n");

   printf("Populacao: %s: (%d)\n"
      "Area: %s: (%d)\n"
      "PIB: %s: (%d)\n"
      "Pontos Turisticos: %s: (%d)\n"
      "Densidade Populacional: %s: (%d)\n"
      "PIB per Capita: %s: (%d)\n"
      "Super Poder: %s: (%d)\n",
      vencedorPop, resultadoPop, vencedorArea, resultadoArea, vencedorPib, resultadoPib, vencedorTuristico, resultadoTuristico,
      vencedorDensidade, resultadoDensidade, vencedorCapita, resultadoCapita, vencedorSuper, resultadoSuper);
  
   //===========================================
   //6. COMBATE DE ATRIBUTO
   //===========================================
   printf("--------------------------------------\n"
      "---------COMBATE POR ATRIBUTOS----------\n"
      "--------------------------------------\n");
   
      printf("Escolha o PRIMEIRO atributo para a comparacao:\n");
      printf("1. Populacao\n2. Area em KM Quadrados\n3. PIB\n4. Pontos Turisticos\n5. Densidade Populacional\n6. Pib per Capita\n7. Super Poder\n");
      printf("Sua opcao:");
      scanf("%d", &opcao1);

      // Salva os valores escolhidos do atributo 1
      switch(opcao1) {
         case 1: nomeAtributo1 = "Populacao"; val1_carta1 = (float)populacao1; val1_carta2 = (float)populacao2; break;
         case 2: nomeAtributo1 = "Area"; val1_carta1 = areaEmSqkm1; val1_carta2 = areaEmSqkm2; break;
         case 3: nomeAtributo1 = "PIB"; val1_carta1 = pib1; val1_carta2 = pib2; break;
         case 4: nomeAtributo1 = "Pontos Turisticos"; val1_carta1 = (float)pontosTuristicos1; val1_carta2 = (float)pontosTuristicos2; break;
         case 5: nomeAtributo1 = "Densidade Populacional"; val1_carta1 = densidadePopulacional1; val1_carta2 = densidadePopulacional2; break;
         case 6: nomeAtributo1 = "Pib per Capita"; val1_carta1 = pibPerCapita1; val1_carta2 = pibPerCapita2; break;
         case 7: nomeAtributo1 = "Super Poder"; val1_carta1 = superPoder1; val1_carta2 = superPoder2; break;
      }
      
      printf("\nEscolha o SEGUNDO atributo para a comparacao:\n");
      switch (opcao2) {
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

      switch(opcao2){
         case 1: nomeAtributo2 = "Populacao"; val2_carta1 = (float)populacao1; val2_carta2 = (float)populacao2; break;
         case 2: nomeAtributo2 = "Area"; val2_carta1 = areaEmSqkm1; val2_carta2 = areaEmSqkm2; break;
         case 3: nomeAtributo2 = "PIB"; val2_carta1 = pib1; val2_carta2 = pib2; break;
         case 4: nomeAtributo2 = "Pontos Turisticos"; val2_carta1 = (float)pontosTuristicos1; val2_carta2 = (float)pontosTuristicos2; break;
         case 5: nomeAtributo2 = "Densidade Populacional"; val2_carta1 = densidadePopulacional1; val2_carta2 = densidadePopulacional2; break;
         case 6: nomeAtributo2 = "Pib per Capita"; val2_carta1 = pibPerCapita1; val2_carta2 = pibPerCapita2; break;
         case 7: nomeAtributo2 = "Super Poder"; val2_carta1 = superPoder1; val2_carta2 = superPoder2; break;
         default: printf("Opcao INVALIDA no SEGUNDO atributo!\n"); return 1;
      }

      //===========================================
      // 5. CÁLCULOS DOS RESULTADOS E SOMAS
      //===========================================
    
      // Se for densidade (5) inverte o sinal para o menor (<). Se não, o maior ganha (>).
      // (1 = Carta 1 Vence, 2 = Carta 2 Vence, 0 = Empate)
      int vencedor1 = (opcao1 == 5) ? ((val1_carta1 < val1_carta2) ? 1 : ((val1_carta1 > val1_carta2) ? 2 : 0))
                                    : ((val1_carta1 > val1_carta2) ? 1 : ((val1_carta1 < val1_carta2) ? 2 : 0));
      int vencedor2 = (opcao2 == 5) ? ((val2_carta1 < val2_carta2) ? 1 : ((val2_carta1 > val2_carta2) ? 2 : 0))
                                    : ((val2_carta1 > val2_carta2) ? 1 : ((val2_carta1 < val2_carta2) ? 2 : 0));

      float somaCarta1 = val1_carta1 + val2_carta1;
      float somaCarta2 = val1_carta2 + val2_carta2;

      int vencedorSoma = (somaCarta1 > somaCarta2) ? 1 : ((somaCarta1 < somaCarta2) ? 2 : 0);
   
      // Soma das Duas Propriedades
      printf("\n========================================================\n");
      printf("                     RESULTADO FINAL                    \n");
      printf("========================================================\n");

      // Atributo 1
      printf("-> Atributo 1 (%s):\n", nomeAtributo1);
      printf("Valor Carta 1: %.2f\nValor Carta 2: %.2f\n", val1_carta1, val1_carta2);
      if (vencedor1 == 1){
         printf("Vencedor parcial: %s\n\n", nomeDaCidade1);
      } else if (vencedor1 == 2) {
         printf("Vencedor parcial: %s\n\n", nomeDaCidade2);
      } else {
         printf("Vencedor parcial: Empate!\n\n");
      }

      // Atributo 2
      printf("-> Atributo 1 (%s):\n", nomeAtributo2);
      printf("Valor Carta 1: %.2f\nValor Carta 2: %.2f\n", val2_carta1, val2_carta2);
      if (vencedor2 == 1){
         printf("Vencedor parcial: %s\n\n", nomeDaCidade1);
      } else if (vencedor2 == 2) {
         printf("Vencedor parcial: %s\n\n", nomeDaCidade2);
      } else {
         printf("Vencedor parcial: Empate!\n\n");
      }

      // Soma e Decisão
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