#include <stdio.h>

int main(){

    char estado_carta1;
    char codigo_carta1[20];
    char nome_carta1[40];
    int populacao_carta1;   //Setando variaveis da primeira carta
    float area_carta1;
    float pib_carta1;
    int pontos_turisticos_carta1;

    char estado_carta2;
    char codigo_carta2[20];
    char nome_carta2[40];
    int populacao_carta2;   //Setano variaveis da segunda carta
    float area_carta2;
    float pib_carta2;
    int pontos_turisticos_carta2;

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
    scanf(" %d", &populacao_carta1);

    printf("    \n");
    printf("Qual a área da cidade? (digite em quilometros quadrados)\n");
    scanf(" %f", &area_carta1);

    printf("    \n");
    printf("Qual o PIB da cidade?\n");
    scanf(" %e", &pib_carta1);

    printf("    \n");
    printf("Quantos pontos turisticos a cidade possui?\n");  
    scanf(" %d", &pontos_turisticos_carta1);

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
    scanf(" %d", &populacao_carta2);

    printf("    \n");
    printf("Qual a área da cidade? (digite em quilometros quadrados)\n");
    scanf(" %f", &area_carta2);

    printf("    \n");
    printf("Qual o PIB da cidade?\n");
    scanf(" %e", &pib_carta2);

    printf("    \n");
    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf(" %d", &pontos_turisticos_carta2);

    printf("    \n");
    printf("    \n");
    printf("    \n"); //Espaçando visualização para imprimir cartas
    printf("    \n"); 
    printf("    \n");
    
    printf("CARTA 1 \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_carta1);    //Imprimindo Carta 1
    printf("Populção: %d \n", populacao_carta1);
    printf("Área: %f km^2 \n", area_carta1);
    printf("PIB: %f Bilhões \n", pib_carta1);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta1);

    printf("    \n"); 
    printf("    \n"); //Espaço entre Impressões
    printf("    \n");

    printf("CARTA 2 \n");
    printf("Estado: %c \n", estado_carta2);
    printf("Código: %s \n", codigo_carta2);
    printf("Nome da Cidade: %s \n", nome_carta2);  //Imprimindo Carta 2
    printf("Populção: %d \n", populacao_carta2);
    printf("Área: %f km^2 \n", area_carta2);
    printf("PIB: %f Bilhões \n", pib_carta2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta2);


}