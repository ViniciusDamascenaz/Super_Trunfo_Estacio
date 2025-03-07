#include <stdio.h>

float CalculoSuperPoder(unsigned long int populacao, float area, float pib, int pontosturisticos, float densidade, float PibPerCapta){
    return (float) populacao + area + pib + (float) pontosturisticos + densidade + PibPerCapta;
}

float CalculoDensidadePopulacional(int habitantes, float area){ //Função que calcula a densidade populacional.
    return (float) habitantes / area;
}


float CalculoPibPerCapta(int habitantes, float pib){ // Função que calcula o PIB per capta.
    return pib / (float) habitantes;
}


int main(){

    char estado_carta1;
    char codigo_carta1[20];
    char nome_carta1[40];
    unsigned long int populacao_carta1;   //Setando variaveis da primeira carta
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;
    float DensidadePopulacionalCarta1;
    float PibPerCaptaCarta1;
    float SuperPoderCarta1;


    char estado_carta2;
    char codigo_carta2[20];
    char nome_carta2[40];
    unsigned long int populacao_carta2;   //Setando variaveis da segunda carta
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;
    float DensidadePopulacionalCarta2;
    float PibPerCaptaCarta2;
    float SuperPoderCarta2;
    
    printf("INSERINDO INFORMAÇÕES DA PRIMEIRA CARTA\n"); //Coletando informações a primeira carta

    printf("    \n");
    printf("Qual o estado? (Insira uma letra entre A-H)\n");
    scanf(" %c", &estado_carta1);

    printf("    \n");
    printf("Qual o codigo da carta? (Insira a letra do estado seguida do codigo de 01-04, ex: A01)\n");
    scanf(" %s", codigo_carta1);

    printf("    \n");
    printf("Qual o nome da cidade?\n");
    scanf(" %s", nome_carta1);

    printf("    \n");
    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %ld", &populacao_carta1);

    printf("    \n");
    printf("Qual a área da cidade? (digite em quilometros quadrados)\n");
    scanf(" %f", &area_carta1);

    printf("    \n");
    printf("Qual o PIB da cidade?\n");
    scanf(" %e", &pib_carta1);

    printf("    \n");
    printf("Quantos pontos turisticos a cidade possui?\n");  
    scanf(" %d", &pontos_turisticos_carta1);

    DensidadePopulacionalCarta1 = CalculoDensidadePopulacional(populacao_carta1, area_carta1); // Calculando Densidade populacional
    PibPerCaptaCarta1 = CalculoPibPerCapta(populacao_carta1, pib_carta1); //Calculando PIB per capta
    SuperPoderCarta1 = CalculoSuperPoder(populacao_carta1,area_carta1,pib_carta1,pontos_turisticos_carta1,DensidadePopulacionalCarta1,PibPerCaptaCarta1); 

    printf("    \n");
    printf("    \n");
    printf("    \n"); //Espaçamento para a introdução da segunda carta
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");
    printf("    \n");

    printf("INSERINDO INFORMAÇÕES DA SEGUNDA CARTA\n"); //Coletando informações da segunda carta

    printf("    \n");
    printf("Qual o estado? (Insira uma letra entre A-H)\n");
    scanf(" %c", &estado_carta2);

    printf("    \n");
    printf("Qual o codigo da carta? (Insira a letra do estado seguida do codigo de 01-04, ex: A01)\n");
    scanf(" %s", codigo_carta2);

    printf("    \n");
    printf("Qual o nome da cidade?\n");
    scanf(" %s", nome_carta2);

    printf("    \n");
    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %ld", &populacao_carta2);

    printf("    \n");
    printf("Qual a área da cidade? (digite em quilometros quadrados)\n");
    scanf(" %f", &area_carta2);

    printf("    \n");
    printf("Qual o PIB da cidade?\n");
    scanf(" %e", &pib_carta2);

    printf("    \n");
    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf(" %d", &pontos_turisticos_carta2);

    DensidadePopulacionalCarta2 = CalculoDensidadePopulacional(populacao_carta2, area_carta2); // Calculando Densidade populacional
    PibPerCaptaCarta2 = CalculoPibPerCapta(populacao_carta2, pib_carta2); //Calculando PIB per capta 
    SuperPoderCarta2 = CalculoSuperPoder(populacao_carta2,area_carta2,pib_carta2,pontos_turisticos_carta2,DensidadePopulacionalCarta2,PibPerCaptaCarta2); 

    printf("    \n");
    printf("    \n");
    printf("    \n"); //Espaçando visualização para imprimir cartas
    printf("    \n"); 
    printf("    \n");
    
    printf("CARTA 1 \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_carta1);    //Imprimindo Carta 1
    printf("Populção: %ld \n", populacao_carta1);
    printf("Densidade Populacional: %f habitantes por km² \n", DensidadePopulacionalCarta1);
    printf("Área: %f km² \n", area_carta1);
    printf("PIB: %f Bilhões \n", pib_carta1);
    printf("PIB Per Capta: %f reais \n", PibPerCaptaCarta1);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta1);
    

    printf("    \n"); 
    printf("    \n"); //Espaço entre Impressões

    printf("CARTA 2 \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_carta2);  //Imprimindo Carta 2
    printf("Populção: %ld \n", populacao_carta2);
    printf("Densidade Populacional: %f habitantes por km² \n", DensidadePopulacionalCarta2);
    printf("Área: %f km² \n", area_carta2);
    printf("PIB: %f Bilhões \n", pib_carta2);
    printf("PIB Per Capta: %f reais \n", PibPerCaptaCarta2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta2);

    printf("    \n"); 
    printf("    \n"); //Espaço entre Impressões
    printf("    \n");

    printf("RESULTADOS:\n");
    printf("    \n"); 
    printf("População: Carta %d venceu\n", (populacao_carta2>populacao_carta1)+1);
    printf("Area: Carta %d venceu\n", (area_carta2>area_carta1)+1);
    printf("PIB: Carta %d venceu\n", (pib_carta2>pib_carta1)+1);
    printf("Pontos Turisticos: Carta %d venceu\n", (pontos_turisticos_carta2>pontos_turisticos_carta1)+1);
    printf("Densidade Populacional: Carta %d venceu\n", (DensidadePopulacionalCarta2>DensidadePopulacionalCarta1)+1);
    printf("PIB Per Capta: Carta %d venceu\n", (PibPerCaptaCarta2>PibPerCaptaCarta1)+1);
    printf("Super Poder: Carta %d venceu\n", (SuperPoderCarta2>SuperPoderCarta1)+1);

}