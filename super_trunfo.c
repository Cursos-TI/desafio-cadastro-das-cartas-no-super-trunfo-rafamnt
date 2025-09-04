#include <stdio.h>

int main(){
    //Primeira carta
    char estadoC1; //Váriavel referente ao estado da carta 1
    char codigoC1[10]; //Váriavel referente ao código da carta 1
    char cidadeC1[50]; //Váriavel referente a cidade da carta 1
    int populacaoC1; //Váriavel referente a população da carta 1
    int pontos_turisticosC1; //Váriavel referente ao número de pontos turísticos da carta 1
    float areaC1; //Váriavel referente a área da carta 1
    float pibC1; //Váriavel referente ao PIB da carta 1
    float densidadeC1; //Váriavel referente a densidade populacional da carta 1
    float pib_percapitaC1; //Váriavel referente ao PIB per capita da carta 1

    printf("Carta 1 \n");

    printf("Estado: ");
    scanf(" %c", &estadoC1);

    printf("Código: ");
    scanf("%s", codigoC1);

    printf("Nome da Cidade: ");
    scanf("%s", cidadeC1);

    printf("População: ");
    scanf("%d", &populacaoC1);

    printf("Área: ");
    scanf("%f", &areaC1);

    printf("PIB: ");
    scanf("%f", &pibC1);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosC1);

    densidadeC1 = (float) populacaoC1 / areaC1; //Cálculo da densidade populacional

    pib_percapitaC1 = (float) (pibC1 * 1000000000) / populacaoC1; //Cálculo do PIB per Capita

    printf("\n");

    //Segunda carta
    char estadoC2; //Váriavel referente ao estado da carta 2
    char codigoC2[10]; //Váriavel referente ao código da carta 2
    char cidadeC2[50]; //Váriavel referente a cidade da carta 2
    int populacaoC2; //Váriavel referente a população da carta 2
    int pontos_turisticosC2; //Váriavel referente ao número de pontos turísticos da carta 2
    float areaC2; //Váriavel referente a área da carta 2
    float pibC2; //Váriavel referente ao PIB da carta 2
    float densidadeC2; //Váriavel referente a densidade populacional da carta 2
    float pib_percapitaC2; //Váriavel referente ao PIB per capita da carta 2

    printf("Carta 2\n");
    
    printf("Estado: ");
    scanf(" %c", &estadoC2);

    printf("Código: ");
    scanf("%s", codigoC2);

    printf("Nome da Cidade: ");
    scanf("%s", cidadeC2);

    printf("População: ");
    scanf("%d", &populacaoC2);

    printf("Área: ");
    scanf("%f", &areaC2);

    printf("PIB: ");
    scanf("%f", &pibC2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosC2);

    densidadeC2 = (float) populacaoC2 / areaC2; //Cálculo da densidade populacional

    pib_percapitaC2 = (float) (pibC2 * 1000000000) / populacaoC2; //Cálculo do PIB per Capita

    printf("\n");

    //Impressão
    printf("Carta 1: \n");
    printf("Estado: %c \n", estadoC1);
    printf("Código: %s \n", codigoC1);
    printf("Nome da Cidade: %s \n", cidadeC1);
    printf("População: %d \n", populacaoC1);
    printf("Área: %.2fkm² \n", areaC1);
    printf("PIB: %.2f bilhões de reais \n", pibC1);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticosC1);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadeC1);
    printf("PIB per Capita: %.2f reais \n", pib_percapitaC1);

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoC2);
    printf("Código: %s \n", codigoC2);
    printf("Nome da Cidade: %s \n", cidadeC2);
    printf("População: %d \n", populacaoC2);
    printf("Área: %.2fkm² \n", areaC2);
    printf("PIB: %.2f bilhões de reais \n", pibC2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticosC2);
    printf("Densidade Populacional: %.2f hab/km² \n", densidadeC2);
    printf("PIB per Capita: %.2f reais \n", pib_percapitaC2);

    return 0;
}