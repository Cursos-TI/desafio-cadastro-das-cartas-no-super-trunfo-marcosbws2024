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

    char estado3[3];
    char codigoCarta3[50];
    char nomeCidade3[100];
    unsigned long int populacao3;
    double area3;
    float pib3;
    int qtdePontoTuristico3;

    char estado4[3];
    char codigoCarta4[50];
    char nomeCidade4[100];
    unsigned long int populacao4;
    double area4;
    float pib4;
    int qtdePontoTuristico4;

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

    // Entrada para a terceira carta
    printf("\nDigite o estado: ");
    scanf(" %c", estado3);  
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta3);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade3);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao3);
    printf("Digite a área da cidade: ");
    scanf("%lf", &area3);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib3);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &qtdePontoTuristico3);

    // Entrada para a quarta carta
    printf("\nDigite o estado: ");
    scanf(" %c", estado4);  
    printf("Digite o código da carta: ");
    scanf("%s", codigoCarta4);
    printf("Digite o nome da cidade: ");
    scanf("%s", nomeCidade4);
    printf("Digite a população da cidade: ");
    scanf("%lu", &populacao4);
    printf("Digite a área da cidade: ");
    scanf("%lf", &area4);
    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib4);
    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &qtdePontoTuristico4);

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

    printf("\nCarta 3:\n");
    printf("Estado: %c\n", estado3);
    printf("Código da Carta: %s\n", codigoCarta3);
    printf("Nome da Cidade: %s\n", nomeCidade3);
    printf("População da Cidade: %.2lu\n", populacao3);
    printf("Área da Cidade: %.2lf km²\n", area3);
    printf("PIB da Cidade: %.2f\n", pib3);
    printf("Quantidade de Pontos Turísticos da Cidade: %d\n", qtdePontoTuristico3);

    printf("\nCarta 4:\n");
    printf("Estado: %c\n", estado4);
    printf("Código da Carta: %s\n", codigoCarta4);
    printf("Nome da Cidade: %s\n", nomeCidade4);
    printf("População da Cidade: %.2lu\n", populacao4);
    printf("Área da Cidade: %.2lf km²\n", area4);
    printf("PIB da Cidade: %.2f\n", pib4);
    printf("Quantidade de Pontos Turísticos da Cidade: %d\n", qtdePontoTuristico4);

    return 0;
}
