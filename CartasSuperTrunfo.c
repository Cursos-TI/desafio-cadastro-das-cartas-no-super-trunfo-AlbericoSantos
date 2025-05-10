#include <stdio.h>

int main(){
        char estado1[4], estado2[4];
        char codigo1[4], codigo2[4];
        char cidade1[20], cidade2[20];
        unsigned long populacao1, populacao2;
        float areaKm1, areaKm2;
        float pib1, pib2;
        int pontosturisticos1,pontosturisticos2;
        float densidadepopulacional1,densidadepopulacional2;
        float pibpercapita1,pibpercapita2;
        float superpoder1, superpoder2;

          // Coleta dados carta 1 (Armazena dados nas respectivas strings)

        printf(" * Carta 1 * \n");
        printf("Digite uma letra de A a H:\n");
        scanf("%s", &estado1);
        printf("Digite o código da Cidade (ex: A01-B02-C03-D04):\n");
        scanf("%s", &codigo1);
        printf("Digite o nome da Cidade (Sem espaços):\n");
        scanf("%s", &cidade1);
        printf("Digite a população (Apenas números):\n");
        scanf("%d", &populacao1);
        printf("Digite a área da Cidade:\n");
        scanf("%f", &areaKm1);
        printf("Digite o PBI (em bilhões de R$):\n");
        scanf("%f", &pib1);
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%d", &pontosturisticos1);

           //Coleta dados Cartas 2 (Armazena dados nas respectivas strigs)

        
        printf(" * Carta 2 * \n");
        printf("Digite uma letra de A a H:\n");
        scanf("%s", &estado2);
        printf("Digite o código da Cidade (ex: A01-B02-C03-D04):\n");
        scanf("%s", &codigo2);
        printf("Digite o nome da Cidade (Sem espaços)\n");
        scanf("%s", &cidade2);
        printf("Digite a população (Apenas números):\n");
        scanf("%d", &populacao2);
        printf("Digite a área da Cidade:\n");
        scanf("%f", &areaKm2);
        printf("Digite o PIB (em bilhões de R$):\n");
        scanf("%f", &pib2);
        printf("Digite a quantidade de pontos turisticos:\n");
        scanf("%d", &pontosturisticos2);

        //Calculos das Médias 1
        densidadepopulacional1 = populacao1 / areaKm1;
        pibpercapita1 = pib1 / (float) populacao1;

        //Calculos das Médias 2
        densidadepopulacional2 = populacao2 / areaKm2;
        pibpercapita2 = pib2 / (float) populacao2;

        /*    
        //Imprime informacoes da Carta 1 

            printf(" * Carta 1 * \n");
            printf("Estado: %s\n", estado1);
            printf("Codigo: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f Km²\n", areaKm1);
            printf("PBI: %.2f Bilhões de R$\n", pib1);
            printf("Pontos Turisticos: %d\n", pontosturisticos1);
            printf("Densidade Populacional: %.2f\n", densidadepopulacional1);
            printf ("PIB per Capita: %.2f\n", pibpercapita1);

            //Imprime informacoes da Carta 2

            printf(" * Carta 2 * \n");
            printf("Estado: %s\n", estado2);
            printf("Codigo: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f Km²\n", areaKm2);
            printf("PBI: %.2f Bilhões de R$\n", pib2);
            printf("Pontos Turisticos: %d\n", pontosturisticos2);
            printf("Densidade Populacional: %.2f\n", densidadepopulacional2);
            printf ("PIB per Capita: %.2f\n", pibpercapita2);
            */

          superpoder1 = ((float)populacao1 + areaKm1 + pib1 + pontosturisticos1 +pibpercapita1 + (1/densidadepopulacional1));

          superpoder2 = ((float)populacao2 + areaKm2 + pib2 + pontosturisticos2 +pibpercapita2 + (1/densidadepopulacional2));

          // Comparação das Cartas

          printf("Comparações das Cartas:\n");

          //População vece o Maior
          printf("Populaçao: Carta %d venceu (%d)\n", (populacao1 > populacao2)* 1 +(populacao2 >= populacao1)* 2, populacao1 > populacao2);

          // Área vence o Maior
          printf("Área: Carta %d venceu (%d)\n", (areaKm1 > areaKm2)* 1 +(areaKm2 >= areaKm1)* 2, areaKm1 > areaKm2);

          // PIB vence o Maior
          printf("PIB: Carta %d venceu (%d)\n", (pib1 > pib2)* 1 +(pib2 >= pib1)* 2, pib1 > pib2);

          // Pontos turisticos o Maior vence
          printf("Pontos turisticos: Carta %d venceu (%d)\n", (pontosturisticos1 > pontosturisticos2)* 1 +(pontosturisticos2 >= pontosturisticos1)* 2, (pontosturisticos1 > pontosturisticos2));

          // Densidade populacional vence o Menor
          printf("Densidade populacional: Carta %d venceu (%d)\n", (densidadepopulacional1 < densidadepopulacional2)* 1 +(densidadepopulacional1 > densidadepopulacional2)* 2, densidadepopulacional1 < densidadepopulacional2);

          // PIB per capita
          printf("PIB per capta: Carta %d venceu (%d)\n", (pibpercapita1 > pibpercapita2)* 1 +(pibpercapita2 >= pibpercapita1)* 2, pibpercapita1 > pibpercapita2);

          // Super poder Maior vence
          printf("Super poder: Carta %d venceu (%d)\n", (superpoder1 > superpoder2)* 1 +(superpoder2 >= superpoder1)* 2, superpoder1 > superpoder2);
        
        
        

    return 0;

}
