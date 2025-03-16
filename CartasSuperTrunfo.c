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

    // Exibindo as cartas com a saída formatada
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2lf km²\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", qtdePontoTuristico);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2lf km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", qtdePontoTuristico2);
    printf("Densidade Populacional: %.2lf hab/km²\n", densidade2);
    printf("PIB per Capita: %.2lf reais\n", pibPerCapita2);

    return 0;
}