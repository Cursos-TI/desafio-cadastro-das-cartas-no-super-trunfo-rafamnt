#include <stdio.h>

int main(){
    //Primeira carta
    char estadoC1; //Referente ao estado da carta 1
    char codigoC1[10]; //Referente ao código da carta 1
    char cidadeC1[50]; //Referente a cidade da carta 1
    int populacaoC1, pontos_turisticosC1; //Referente a população e pontos turísticos da carta 1
    float areaC1, pibC1; //Referente a área e PIB da carta 1

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

    printf("\n");

    //Segunda carta
    char estadoC2; //Referente ao estado da carta 2
    char codigoC2[10]; //Referente ao código da carta 2
    char cidadeC2[50]; //Referente a cidade da carta 2
    int populacaoC2, pontos_turisticosC2; //Referente a população e pontos turísticos da carta 2
    float areaC2, pibC2; //Referente a área e PIB da carta 2

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

    printf("\n");

    printf("Carta 2: \n");
    printf("Estado: %c \n", estadoC2);
    printf("Código: %s \n", codigoC2);
    printf("Nome da Cidade: %s \n", cidadeC2);
    printf("População: %d \n", populacaoC2);
    printf("Área: %.2fkm² \n", areaC2);
    printf("PIB: %.2f bilhões de reais \n", pibC2);
    printf("Número de Pontos Turísticos: %d \n", pontos_turisticosC2);

    return 0;
}