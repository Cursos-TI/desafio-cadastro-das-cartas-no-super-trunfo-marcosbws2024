#include<stdio.h>

int main () {
  
    char estado;
    char codigoCarta[50];
    char nomeCidade[100];
    unsigned long int populacao;
    double area;
    float pib;
    int qtdePontoTuristico;

    char estado2[3];
    char codigoCarta2[50];
    char nomeCidade2[100];
    unsigned long int populacao2;
    double area2;
    float pib2;
    int qtdePontoTuristico2;

  
    printf("\nExemplo de Dados para inserir\n");
    printf("\nDigite estado: A\n");
    printf("Digite o código da carta: 01\n");
    printf("Digite o nome da cidade: Carapicuiba\n");
    printf("Digite a população da cidade: 123.456\n");
    printf("Digite a área da cidade: 13213.12\n");
    printf("Digite o PIB da cidade: 2196.36\n");
    printf("Digite a quantidade de pontos turísticos da cidade:12\n");

    // Entrada para a primeira carta
    printf("\nDigite o estado: ");
    scanf(" %c", estado);  
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao);
    printf("Digite a área da cidade: ");
    scanf("%lf", &area);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdePontoTuristico);

    // Entrada para a segunda carta
    printf("\nDigite o estado: ");
    scanf(" %c", estado2);  
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta2);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade2);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao2);
    printf("Digite a área da cidade: ");
    scanf("%lf", &area2);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdePontoTuristico2);

    // Exibição das cartas cadastradas
    printf("\n\nCarta 1:\n");
    printf("Estado: %c\n", estado);
    printf("Código da Carta: %s\n", codigoCarta);
    printf("Nome da Cidade: %s\n", nomeCidade);
    printf("População da Cidade: %.2lu\n", populacao);
    printf("Área da Cidade: %.2lf km²\n", area);
    printf("PIB da Cidade: %.2f\n", pib);
    printf("Quantidade de Pontos Turísticos da Cidade: %d\n", qtdePontoTuristico);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População da Cidade: %.2lu\n", populacao2);
    printf("Área da Cidade: %.2lf km²\n", area2);
    printf("PIB da Cidade: %.2f\n", pib2);
    printf("Quantidade de Pontos Turísticos da Cidade: %d\n", qtdePontoTuristico2);

  

    return 0;
}
