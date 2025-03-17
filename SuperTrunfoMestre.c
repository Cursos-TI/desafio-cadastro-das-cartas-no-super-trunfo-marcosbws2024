#include <stdio.h>

int main() {
    char estado;
    char codigoCarta[50];
    char nomeCidade[100];
    unsigned long int populacao;
    double area;
    double pib;
    int qtdePontoTuristico;

    char estado2;
    char codigoCarta2[50];
    char nomeCidade2[100];
    unsigned long int populacao2;
    double area2;
    double pib2;
    int qtdePontoTuristico2;

    // Entrada para a primeira carta
    printf("\nDigite o estado: ");
    scanf(" %c", &estado);
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%lf", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdePontoTuristico);

    // Entrada para a segunda carta
    printf("\nDigite o estado: ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%lf", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdePontoTuristico2);

    // Cálculos
    double densidade = populacao / area;
    double pibPerCapita = pib  / populacao; 
    double densidade2 = populacao2 / area2;
    double pibPerCapita2 = pib2  / populacao2;  

    // Cálculo do Super Poder
    float superPoder = (float)(populacao + area + pib + qtdePontoTuristico + pibPerCapita + (1 / densidade));
    float superPoder2 = (float)(populacao2 + area2 + pib2 + qtdePontoTuristico2 + pibPerCapita2 + (1 / densidade2));

    // Comparações usando operador ternário
    printf("\nComparação de Cartas:\n");

    // Comparando populações
    printf("\nPopulação: ");
    printf((populacao > populacao2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");

    // Comparando áreas
    printf("\nÁrea: ");
    printf((area > area2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");

    // Comparando PIBs
    printf("\nPIB: ");
    printf((pib > pib2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");

    // Comparando pontos turísticos
    printf("\nPontos Turísticos: ");
    printf((qtdePontoTuristico > qtdePontoTuristico2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");

    // Comparando densidades populacionais
    printf("\nDensidade Populacional: ");
    printf((densidade < densidade2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");  // Menor densidade vence

    // Comparando PIB per capita
    printf("\nPIB per Capita: ");
    printf((pibPerCapita > pibPerCapita2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");

    // Comparando super poder
    printf("\nSuper Poder: ");
    printf((superPoder > superPoder2) ? "Carta 1 venceu\n" : "Carta 2 venceu\n");

    return 0;
}