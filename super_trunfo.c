#include <stdio.h>

int main(){
    //Primeira carta
    char estadoC1; //Variável referente ao estado da carta 1
    char codigoC1[10]; //Variável referente ao código da carta 1
    char cidadeC1[50]; //Variável referente a cidade da carta 1
    unsigned long int populacaoC1; //Variável referente a população da carta 1
    int pontos_turisticosC1; //Variável referente ao número de pontos turísticos da carta 1
    float areaC1; //Variável referente a área da carta 1
    float pibC1; //Variável referente ao PIB da carta 1
    float densidadeC1; //Variável referente a densidade populacional da carta 1
    float pib_percapitaC1; //Variável referente ao PIB per capita da carta 1
    float superpoderC1; //Variável referente ao Super Poder da carta 1
    
    superpoderC1 = (float) (populacaoC1 + areaC1 + pibC1 + pontos_turisticosC1 + pib_percapitaC1 + (1 / densidadeC1)) / 6;

    printf("Carta 1 \n");

    printf("Estado: ");
    scanf(" %c", &estadoC1);

    printf("Código: ");
    scanf("%s", codigoC1);

    printf("Nome da Cidade: ");
    scanf("%s", cidadeC1);

    printf("População: ");
    scanf("%lu", &populacaoC1);

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
    char estadoC2; //Variável referente ao estado da carta 2
    char codigoC2[10]; //Variável referente ao código da carta 2
    char cidadeC2[50]; //Variável referente a cidade da carta 2
    unsigned long int populacaoC2; //Variável referente a população da carta 2
    int pontos_turisticosC2; //Variável referente ao número de pontos turísticos da carta 2
    float areaC2; //Variável referente a área da carta 2
    float pibC2; //Variável referente ao PIB da carta 2
    float densidadeC2; //Variável referente a densidade populacional da carta 2
    float pib_percapitaC2; //Variável referente ao PIB per capita da carta 2
    float superpoderC2; //Variável referente ao Super Poder da carta 2

    superpoderC2 = (float) (populacaoC2 + areaC2 + pibC2 + pontos_turisticosC2 + pib_percapitaC2 + (1 / densidadeC2)) / 6;

    printf("Carta 2\n");
    
    printf("Estado: ");
    scanf(" %c", &estadoC2);

    printf("Código: ");
    scanf("%s", codigoC2);

    printf("Nome da Cidade: ");
    scanf("%s", cidadeC2);

    printf("População: ");
    scanf("%lu", &populacaoC2);

    printf("Área: ");
    scanf("%f", &areaC2);

    printf("PIB: ");
    scanf("%f", &pibC2);

    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticosC2);

    densidadeC2 = (float) populacaoC2 / areaC2; //Cálculo da densidade populacional

    pib_percapitaC2 = (float) (pibC2 * 1000000000) / populacaoC2; //Cálculo do PIB per Capita

    printf("\n");

    //Comparação das cartas
    char carta1[30] = "Carta 1";
    char carta2[30] = "Carta 2";
    int resultado_populacao = populacaoC1 > populacaoC2;
    int resultado_area = areaC1 > areaC2;
    int resultado_pib = pibC1 > pibC2;
    int resultado_pontos_turisticos = pontos_turisticosC1 > pontos_turisticosC2;
    int resultado_densidade = densidadeC1 < densidadeC2;
    int resultado_pibpercapita = pib_percapitaC1 > pib_percapitaC2;
    int resultado_superpoder = superpoderC1 > superpoderC2;

    printf("Comparação das Cartas\n");
    printf("População: %s venceu (%d)\n", resultado_populacao ? carta1 : carta2, resultado_populacao);
    printf("Área: %s venceu (%d)\n", resultado_area ? carta1 : carta2, resultado_area);
    printf("PIB: %s venceu (%d)\n", resultado_pib ? carta1 : carta2, resultado_pib);
    printf("Pontos Turísticos: %s venceu (%d)\n", resultado_pontos_turisticos ? carta1 : carta2, resultado_pontos_turisticos);
    printf("Densidade Populacional: %s venceu (%d)\n", resultado_densidade ? carta1 : carta2, resultado_densidade);
    printf("PIB per Capita: %s venceu (%d)\n", resultado_pibpercapita ? carta1 : carta2, resultado_pibpercapita);
    printf("Super Poder: %s venceu (%d)\n", resultado_superpoder ? carta1 : carta2, resultado_superpoder);
}