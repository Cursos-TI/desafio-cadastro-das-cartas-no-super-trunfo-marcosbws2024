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
    double pibPerCapita = pib * 1000000000 / populacao;  // PIB em bilhões de reais
    double densidade2 = populacao2 / area2;
    double pibPerCapita2 = pib2 * 1000000000 / populacao2;  // PIB em bilhões de reais

    // Cálculo do Super Poder
    float superPoder = (float)(populacao + area + pib + qtdePontoTuristico + pibPerCapita + (1 / densidade));
    float superPoder2 = (float)(populacao2 + area2 + pib2 + qtdePontoTuristico2 + pibPerCapita2 + (1 / densidade2));

    // Comparações
    printf("\nComparação de Cartas:\n");

    printf("\nPopulação: ");
    if (populacao > populacao2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("\nÁrea: ");
    if (area > area2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("\nPIB: ");
    if (pib > pib2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("\nPontos Turísticos: ");
    if (qtdePontoTuristico > qtdePontoTuristico2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("\nDensidade Populacional: ");
    if (densidade < densidade2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("\nPIB per Capita: ");
    if (pibPerCapita > pibPerCapita2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    printf("\nSuper Poder: ");
    if (superPoder > superPoder2)
        printf("Carta 1 venceu (1)\n");
    else
        printf("Carta 2 venceu (0)\n");

    return 0;
}
