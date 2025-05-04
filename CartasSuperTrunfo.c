#include <stdio.h>

int main(){
        char estado1[4], estado2[4];
        char codigo1[4], codigo2[4];
        char cidade1[20], cidade2[20];
        int populacao1, populacao2;
        float areaKm1, areaKm2;
        float pib1, pib2;
        int pontosturisticos1,pontosturisticos2;

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

            //Imprime informacoes da Carta 1 

            printf(" * Carta 1 * \n");
            printf("Estado: %s\n", estado1);
            printf("Codigo: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("População: %d\n", populacao1);
            printf("Área: %.2f Km²\n", areaKm1);
            printf("PBI: %.2f Bilhões de R$\n", pib1);
            printf("Pontos Turisticos: %d\n", pontosturisticos1);

            //Imprime informacoes da Carta 2

            printf(" * Carta 2 * \n");
            printf("Estado: %s\n", estado2);
            printf("Codigo: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("População: %d\n", populacao2);
            printf("Área: %.2f Km²\n", areaKm2);
            printf("PBI: %.2f Bilhões de R$\n", pib2);
            printf("Pontos Turisticos: %d\n", pontosturisticos2);
        
        
        

    return 0;

}
