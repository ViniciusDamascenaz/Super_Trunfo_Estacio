#include <stdio.h>
#include <stdlib.h>


int CalculoAtributos(float atributoCarta1, float atributoCarta2){
    if ((float) atributoCarta1 > (float) atributoCarta2){
        return 1; //carta 1 ganhou
    } else if (atributoCarta1 < atributoCarta2){
        return 2; //carta 2 ganhou
    } else {
        return 0; //houve um empate
    }
}

int CalculoAtributoDensidade(float atributoCarta1, float atributoCarta2){
    if (atributoCarta1 < atributoCarta2){
        return 1; //carta 1 ganhou
    } else if (atributoCarta1 > atributoCarta2){
        return 2; //carta 2 ganhou
    } else {
        return 0; //houve um empate
    }
}

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

    system("cls||clear");
    int entrada;

    printf("Escolha qual atributo quer comparar... \n");
    printf("1 - população \n");
    printf("2 - área \n");
    printf("3 - PIB \n");
    printf("4 - Pontos Turisticos \n");
    printf("5 - PIB Per Capta \n");
    printf("6 - Densidade Populacional \n");
    printf("---> ");

    scanf("%d", &entrada);

    switch(entrada){
    case 1:
        system("cls||clear");
        printf("Você escolheu comparar População \n \n");
    break;
    case 2:
        system("cls||clear");   
        printf("Você escolheu comparar Área \n \n");
    break;
    case 3:
        system("cls||clear");
        printf("Você escolheu comparar PIB \n \n");
    break;
    case 4:
        system("cls||clear");
        printf("Você escolheu comparar Pontos turisticos \n \n");
    break;
    case 5:
        system("cls||clear");
        printf("Você escolheu comparar PIB Per Capta \n \n");
    break;
    case 6:
        system("cls||clear");
        printf("Você escolheu comparar Densidade Populacional \n \n");
    break;
    default:
        system("cls||clear");
        printf("Você precisa escolher uma opção valida!  \n \n");
        main();
    }
    
    int comparacao = entrada;

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
    system("cls||clear");

    printf("    \n");
    printf("Qual o codigo da carta? (Insira a letra do estado seguida do codigo de 01-04, ex: A01)\n");
    scanf(" %s", codigo_carta1);
    system("cls||clear");

    printf("    \n");
    printf("Qual o nome da cidade?\n");
    scanf(" %s", nome_carta1);
    system("cls||clear");

    printf("    \n");
    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %ld", &populacao_carta1);
    system("cls||clear");

    printf("    \n");
    printf("Qual a área da cidade? (digite em quilometros quadrados)\n");
    scanf(" %f", &area_carta1);
    system("cls||clear");

    printf("    \n");
    printf("Qual o PIB da cidade?\n");
    scanf(" %e", &pib_carta1);
    system("cls||clear");

    printf("    \n");
    printf("Quantos pontos turisticos a cidade possui?\n");  
    scanf(" %d", &pontos_turisticos_carta1);
    

    DensidadePopulacionalCarta1 = CalculoDensidadePopulacional(populacao_carta1, area_carta1); // Calculando Densidade populacional
    PibPerCaptaCarta1 = CalculoPibPerCapta(populacao_carta1, pib_carta1); //Calculando PIB per capta
    SuperPoderCarta1 = CalculoSuperPoder(populacao_carta1,area_carta1,pib_carta1,pontos_turisticos_carta1,DensidadePopulacionalCarta1,PibPerCaptaCarta1); 

    system("cls||clear"); //Limpa a tela para introduzir a segunda carta

    printf("INSERINDO INFORMAÇÕES DA SEGUNDA CARTA\n"); //Coletando informações da segunda carta

    printf("    \n");
    printf("Qual o estado? (Insira uma letra entre A-H)\n");
    scanf(" %c", &estado_carta2);
    system("cls||clear");

    printf("    \n");
    printf("Qual o codigo da carta? (Insira a letra do estado seguida do codigo de 01-04, ex: A01)\n");
    scanf(" %s", codigo_carta2);
    system("cls||clear");

    printf("    \n");
    printf("Qual o nome da cidade?\n");
    scanf(" %s", nome_carta2);
    system("cls||clear");

    printf("    \n");
    printf("Qual o numero de habitantes da cidade?\n");
    scanf(" %ld", &populacao_carta2);
    system("cls||clear");

    printf("    \n");
    printf("Qual a área da cidade? (digite em quilometros quadrados)\n");
    scanf(" %f", &area_carta2);
    system("cls||clear");

    printf("    \n");
    printf("Qual o PIB da cidade?\n");
    scanf(" %e", &pib_carta2);
    system("cls||clear");

    printf("    \n");
    printf("Quantos pontos turisticos a cidade possui?\n");
    scanf(" %d", &pontos_turisticos_carta2);

    DensidadePopulacionalCarta2 = CalculoDensidadePopulacional(populacao_carta2, area_carta2); // Calculando Densidade populacional
    PibPerCaptaCarta2 = CalculoPibPerCapta(populacao_carta2, pib_carta2); //Calculando PIB per capta 
    SuperPoderCarta2 = CalculoSuperPoder(populacao_carta2,area_carta2,pib_carta2,pontos_turisticos_carta2,DensidadePopulacionalCarta2,PibPerCaptaCarta2); 

    system("cls||clear"); // Limpeza para mostrar cartas
    
    printf("CARTA 1 \n");
    printf("Estado: %c \n", estado_carta1);
    printf("Código: %s \n", codigo_carta1);
    printf("Nome da Cidade: %s \n", nome_carta1);    //Imprimindo Carta 1
    printf("Populção: %ld \n", populacao_carta1);
    printf("Densidade Populacional: %.2f habitantes por km² \n", DensidadePopulacionalCarta1);
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
    printf("Densidade Populacional: %.2f habitantes por km² \n", DensidadePopulacionalCarta2);
    printf("Área: %f km² \n", area_carta2);
    printf("PIB: %f Bilhões \n", pib_carta2);
    printf("PIB Per Capta: %f reais \n", PibPerCaptaCarta2);
    printf("Numero de Pontos Turisticos: %d \n", pontos_turisticos_carta2);

    printf("    \n"); 
    printf("    \n"); //Espaço entre Impressões
    printf("    \n");

    if (comparacao == 1){
        int cartaVencedora = CalculoAtributos(populacao_carta1, populacao_carta2);
        printf("RESULTADO\n");
        printf("Carta 1 - %s (%c): %ld habitantes\n", nome_carta1, estado_carta1, populacao_carta1);
        printf("Carta 2 - %s (%c): %ld habitantes\n", nome_carta2, estado_carta2, populacao_carta2);
        if (cartaVencedora == 0){
            printf("Resultado: Houve um Empate!!\n \n");
        }
        else{
            printf("Resultado: Carta %d Venceu!\n \n", cartaVencedora);
        }
        
    
    } else if (comparacao == 2) {
        int cartaVencedora = CalculoAtributos(area_carta1, area_carta2);
        printf("RESULTADO\n");
        printf("Carta 1 - %s (%c): %.2f km²\n", nome_carta1, estado_carta1, area_carta1);
        printf("Carta 2 - %s (%c): %.2f km²\n", nome_carta2, estado_carta2, area_carta2);
        if (cartaVencedora == 0){
            printf("Resultado: Houve um Empate!!\n \n");
        }
        else{
            printf("Resultado: Carta %d Venceu!\n \n", cartaVencedora);
        }
    
    } else if (comparacao == 3) {
        int cartaVencedora = CalculoAtributos(pib_carta1, pib_carta2);
        printf("RESULTADO\n");
        printf("Carta 1 - %s (%c): %.2f bilhões\n", nome_carta1, estado_carta1, pib_carta1);
        printf("Carta 2 - %s (%c): %.2f bilhões\n", nome_carta2, estado_carta2, pib_carta2);
        if (cartaVencedora == 0){
            printf("Resultado: Houve um Empate!!\n \n");
        }
        else{
            printf("Resultado: Carta %d Venceu!\n \n", cartaVencedora);
        }

    } else if (comparacao == 4) {
        int cartaVencedora = CalculoAtributos(pontos_turisticos_carta1, pontos_turisticos_carta2);
        printf("RESULTADO\n");
        printf("Carta 1 - %s (%c): %d pontos turísticos\n", nome_carta1, estado_carta1, pontos_turisticos_carta1);
        printf("Carta 2 - %s (%c): %d pontos turísticos\n", nome_carta2, estado_carta2, pontos_turisticos_carta2);
        if (cartaVencedora == 0){
            printf("Resultado: Houve um Empate!!\n \n");
        }
        else{
            printf("Resultado: Carta %d Venceu!\n \n", cartaVencedora); 
        }

    } else if (comparacao == 5) {
        int cartaVencedora = CalculoAtributos(PibPerCaptaCarta1, PibPerCaptaCarta2);
        printf("RESULTADO\n");
        printf("Carta 1 - %s (%c): R$ %.2f per capita\n", nome_carta1, estado_carta1, PibPerCaptaCarta1);
        printf("Carta 2 - %s (%c): R$ %.2f per capita\n", nome_carta2, estado_carta2, PibPerCaptaCarta2);
        if (cartaVencedora == 0){
            printf("Resultado: Houve um Empate!!\n \n");
        }
        else{
            printf("Resultado: Carta %d Venceu!\n \n", cartaVencedora); 
        }

    } else if (comparacao == 6) {
        int cartaVencedora = CalculoAtributoDensidade(DensidadePopulacionalCarta1, DensidadePopulacionalCarta2);
        printf("RESULTADO\n");
        printf("Carta 1 - %s (%c): %.2f habitantes/km²\n", nome_carta1, estado_carta1, DensidadePopulacionalCarta1);
        printf("Carta 2 - %s (%c): %.2f habitantes/km²\n", nome_carta2, estado_carta2, DensidadePopulacionalCarta2);
        if (cartaVencedora == 0){
            printf("Resultado: Houve um Empate!!\n \n");
        }
        else{
            printf("Resultado: Carta %d Venceu!\n \n", cartaVencedora);
        }

    }
    

}