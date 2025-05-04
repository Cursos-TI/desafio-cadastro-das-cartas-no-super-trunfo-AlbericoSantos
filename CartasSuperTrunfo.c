#include <stdio.h>

int main(){
    /*    // Cartas 1 e 2
    char estado1,estado2;
    char codigo_da_carta1[4],codigo_da_carta2[4];
    char nome_da_cidade1[20],nome_da_cidade2[20];
    int populacao1,populacao2;
    float area_em_km²1,area_em_km²2;
    float PIB1,PIB2; //em Bilhoes
    int pontos_turisticos1,pontos_turisticos2;
 //Coleta e armazena dados da Carta1

        printf(" * Carta 1 * \n");
        printf("Digite uma  letra: de A a H\n");
        scanf("%c", &estado1);
        printf("Digite o codigo da carta: (ex: A1-B2-C3-D4)\n");
        scanf("%s", &codigo_da_carta1);
        printf("Digite o nome da Cidade:\n");
        scanf("%s", &nome_da_cidade1);
        printf("digite a quantidade popupacional:\n");
        scanf("%d", &populacao1);
        printf("Digite a Area em km²:\n");
        scanf("%.2f", &area_em_km²1);
        printf("Digite o PIB:\n");
        scanf("%.2f", &PIB1);
        prinf("Digite pontos turisticos\n");
        scanf("%d", &pontos_turisticos1);
        
        //Coleta e armazena dados da Carta2

        printf(" * Carta 2 * \n");
        printf("Carta 2 \n");
        printf("Digite uma letra: de A a H\n");
        scanf("%c", &estado2);
        printf("Digite o codigo da carta: (ex: A1-B2-C3-D4)\n");
        scanf("%s", &codigo_da_carta2);
        printf("Digite o nome da Cidade:\n");
        scanf("%s", &nome_da_cidade2);
        printf("digite a quantidade popupacional:\n");
        scanf("%d", &populacao2);
        printf("Digite a Area em km²:\n");
        scanf("%.2f", &area_em_km²2);
        printf("Digite o PIB:\n");
        scanf("%.2f", &PIB2);
        prinf("Digite pontos turisticos1\n");
        scanf("%d", &pontos_turisticos2);

        //Impressao da Carta: 1

        printf("Carta 1 \n");
        printf("Estado1: %c \n", estado1); 
        printf("Codigo da Carta1: %s \n",codigo_da_carta1);
        printf("Nome da Cidade1: %s \n",nome_da_cidade1);
        printf("Quantidade populacional1: %d \n", populacao1);
        printf("Pontos turisticos1: %d \n", pontos_turisticos1);
        printf("Area em km²1: %.2f \n", area_em_km²1); 
        printf("PIB1: %.2f \n", PIB1);

        //Impressao da Carta: 2

        printf("Carta 2 \n");
        printf("Estado2: %c \n", estado2); 
        printf("Codigo da Carta2: %s \n",codigo_da_carta2);
        printf("Nome da Cidade2: %s \n",nome_da_cidade2);
        printf("Quantidade populacional2: %d\n", populacao2);
        printf("Pontos turisticos2: %d \n", pontos_turisticos2);
        printf("Area em km²2: %.2f \n", area_em_km²2); 
        printf("PIB2: %f \n", PIB2);
        */
        char estado1,estado2;
        char codigo1[4],codigo2[4];
        char cidade1[2],cidade2[20];
        int populacao1,populacao2;
        float areakm1, areakm2;
        float pib1,pib2;
        int pontosturisticos1,pontosturisticos2;

          // Coleta dados carta 1

        printf("* Carta 1 *\n");
        printf("Digite_uma_letra_de_A_a_H:\n");
        scanf("%c", &estado1);
        printf("Digite_o_codigo_da_cidade_(ex:_A01-B02-C03-D04):\n");
        scanf("%s", &codigo1);
        printf("Digite_o_nome_da_cidade:\n");
        scanf("%s", &cidade1);
        printf("Digite_a_populacao:\n");
        scanf("%d", &populacao1);
        printf("Digite_a_area_da_cidade:\n");
        scanf("%f", &areakm1);
        printf("Digite_o_pib:\n");
        scanf("%f", &pib1);
        printf("Digite_a_quantidade_de_pontos_turisticos:\n");
        scanf("%d", &pontosturisticos1);

           //Coleta dados Cartas 2

        printf("* Carta 2 *\n");
        printf("Digite_uma_letra_de_A_a_H:\n");
        scanf("%c", &estado2);
        printf("Digite_o_codigo_da_cidade_(ex:_A01-B02-C03-D04):\n");
        scanf("%s", &codigo2);
        printf("Digite_O_nome_da_Cidade\n");
        scanf("%s", &cidade1);
        printf("Digite_a_populacao:\n");
        scanf("%d", &populacao2);
        printf("Digite_a_area_da_cidade:\n");
        scanf("%f", &areakm2);
        printf("Digite_o_pib:\n");
        scanf("%f",&pib2);
        printf("Digite_a_quantidade_de_pontos_turisticos:\n");
        scanf("%d", &pontosturisticos2);

            //Imprime informacoes da Carta 1

        printf("* Carta 1 \n");
        printf("Estado: %c\n", estado1);
        printf("Codigo: %s\n", codigo1);
        printf("Cidade: %s\n", cidade1);
        printf("Populacao: %d\n", populacao1);
        printf("Area: %.2f\n", areakm1);
        printf("PBI: %.2f\n", pib1);
        printf("Pontos Turisticos: %d\n", pontosturisticos1);

            //Imprime informacoes da Carta 2

        printf("* Carta 2*\n");
        printf("Estado: %c\n", estado2);
        printf("Codigo: %s\n", codigo2);
        printf("Cidade: %s\n", cidade2);
        printf("Populacao: %d\n", populacao2);
        printf("Area: %2.f Km²\n", areakm2);
        printf("Pontos Turisticos: %d\n", pontosturisticos2);

        
        



            

    return 0;

}
