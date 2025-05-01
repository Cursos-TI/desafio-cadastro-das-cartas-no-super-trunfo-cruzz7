#include <stdio.h>

int main() {
    // Dados da primeira carta
    char estado1[100];
    char codigo1[100];
    char nomeCidade1[100];
    long long populacao1;
    double pib1;
    double area1;
    int pontosTuristicos1;
    double densidadePopulacional1;
    double pibPerCapita1;

    // Dados da segunda carta
    char estado2[100];
    char codigo2[100];
    char nomeCidade2[100];
    long long populacao2;
    double pib2;
    double area2;
    int pontosTuristicos2;
    double densidadePopulacional2;
    double pibPerCapita2;

    printf("Cadastro da primeira carta:\n");
    printf("Informe o estado: ");
    scanf("%99s", estado1);
    printf("Informe o código da carta: ");
    scanf("%99s", codigo1);
    printf("Informe o nome da cidade: ");
    scanf("%99s", nomeCidade1);
    printf("Informe a população: ");
    scanf("%lld", &populacao1);
    printf("Informe o PIB (em bilhões): ");
    scanf("%lf", &pib1);
    printf("Informe a área (em km²): ");
    scanf("%lf", &area1);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculo da densidade populacional e PIB per capita para a primeira carta
    densidadePopulacional1 = (double)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1; // Convertendo PIB para a mesma unidade da população

    printf("\nCadastro da segunda carta:\n");
    printf("Informe o estado: ");
    scanf("%99s", estado2);
    printf("Informe o código da carta: ");
    scanf("%99s", codigo2);
    printf("Informe o nome da cidade: ");
    scanf("%99s", nomeCidade2);
    printf("Informe a população: ");
    scanf("%lld", &populacao2);
    printf("Informe o PIB (em bilhões): ");
    scanf("%lf", &pib2);
    printf("Informe a área (em km²): ");
    scanf("%lf", &area2);
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional e PIB per capita para a segunda carta
    densidadePopulacional2 = (double)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2; // Convertendo PIB para a mesma unidade da população

    printf("\nInformações das cartas cadastradas:\n");
    printf("-------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", nomeCidade1);
    printf("População: %lld\n", populacao1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Área: %.2f km²\n", area1);
    printf("Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB Per Capita: %.2f\n", pibPerCapita1);
    printf("-------------------------\n");

    printf("-------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", nomeCidade2);
    printf("População: %lld\n", populacao2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Área: %.2f km²\n", area2);
    printf("Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB Per Capita: %.2f\n", pibPerCapita2);
    printf("-------------------------\n");

    return 0;
}
