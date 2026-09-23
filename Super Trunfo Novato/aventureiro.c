#include <stdio.h>

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
   int atributo;

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
   
   printf("Escolha um atributo para o combate:\n");
   printf("1. Populacao.\n");
   printf("2. Area em KM Quadrados.\n");
   printf("3. PIB.\n");
   printf("4. Pontos Turisticos.\n");
   printf("5. Densidade Populacional.\n");
   printf("6. Pib per Capita.\n");
   printf("7. Super Poder.\n");
   scanf("%d", &atributo);
   
   switch (atributo)
   {
      case 1:
         printf("Voce escolheu o Atributo: Populacao.\n");
         printf("Carta 1 - %s (%2s): %u de pessoas. \n", nomeDaCidade1, estado1, populacao1);
         printf("Carta 2 - %s (%2s): %u de pessoas. \n", nomeDaCidade2, estado2, populacao2);

         if (populacao1 == populacao2){
            printf("Houve empate!\n");
         } else if (populacao1 > populacao2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      case 2:
         printf("Voce escolheu o Atributo: Area em KM Quadrados.\n");
         printf("Carta 1 - %s (%2s): %.2f KM quadrados.\n", nomeDaCidade1, estado1, areaEmSqkm1);
         printf("Carta 2 - %s (%2s): %.2f KM quadrados.\n", nomeDaCidade2, estado2, areaEmSqkm2);

         if (areaEmSqkm1 == areaEmSqkm2){
            printf("Houve empate!\n");
         } else if (areaEmSqkm1 > areaEmSqkm2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      case 3:
         printf("Voce escolheu o Atributo: PIB.\n");
         printf("Carta 1 - %s (%2s): %.2f bilhoes de reais.\n", nomeDaCidade1, estado1, pib1);
         printf("Carta 2 - %s (%2s): %.2f bilhoes de reais.\n", nomeDaCidade2, estado2, pib2);

         if (pib1 == pib2){
            printf("Houve empate!\n");
         } else if (pib1 > pib2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      case 4:
         printf("Voce escolheu o Atributo: Pontos Turisticos.\n");
         printf("Carta 1 - %s (%2s): %d Pontos Turisticos.\n", nomeDaCidade1, estado1, pontosTuristicos1);
         printf("Carta 2 - %s (%2s): %d Pontos Turisticos.\n", nomeDaCidade2, estado2, pontosTuristicos2);

         if (pontosTuristicos1 == pontosTuristicos2){
            printf("Houve Empate!\n");
         } else if (pontosTuristicos1 > pontosTuristicos2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      case 5:
         printf("Voce escolheu o atributo: Densidade Populacional.\n");
         printf("Carta 1 - %s (%2s): %.2f hab/km quadrado.\n", nomeDaCidade1, estado1, densidadePopulacional1);
         printf("Carta 2 - %s (%2s): %.2f hab/km quadrado.\n", nomeDaCidade2, estado2, densidadePopulacional2);

         if (densidadePopulacional1 == densidadePopulacional2){
            printf("Houve Empate!\n");
         } else if (1.0 / densidadePopulacional1 < 1.0 / densidadePopulacional2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      case 6:
         printf("Voce escolheu o atributo: Pib per Capita.\n");
         printf("Carta 1 - %s (%2s): %.2f reais.\n", nomeDaCidade1, estado1, pibPerCapita1);
         printf("Carta 2 - %s (%2s): %.2f reais.\n", nomeDaCidade2, estado2, pibPerCapita2);

         if (pibPerCapita1 == pibPerCapita2){
            printf("Houve Empate!\n");
         } else if (pibPerCapita1 > pibPerCapita2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      case 7:
         printf("Voce escolheu o atributo: Super Poder.\n");
         printf("Carta 1 - %s (%2s): %d reais.\n", nomeDaCidade1, estado1, superPoder1);
         printf("Carta 2 - %s (%2s): %d reais.\n", nomeDaCidade2, estado2, superPoder2);

         if (superPoder1 == superPoder2){
            printf("Houve Empate!\n");
         } else if (superPoder1 > superPoder2){
            printf("Carta 1 (%s) venceu!\n", nomeDaCidade1);
         } else {
            printf("Carta 2 (%s) venceu!\n", nomeDaCidade2);
         }
         break;
      default:
         printf("Opcao Incorreta!\n");
         break;
   }

   return 0;

}