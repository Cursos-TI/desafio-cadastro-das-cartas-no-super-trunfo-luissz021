#include <stdio.h>

int main(){
    // Criando as variáveis necessárias para o jogo
    char estado;
    char codigo_carta[3];
    char nome_cidade[20];
    int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    // Armazenando os valores das variáveis
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    fflush(stdin);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta);
    fflush(stdin);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    // Calculando novos valores
    float densidade = populacao / area;
    float pib_per_capita = pib / populacao;
    // Exibindo os valores armazenados
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigo_carta);
    printf("\nNome da Cidade: %s", nome_cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2fkm²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nPontos Turísticos: %d", pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita);
//    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: %.2f\n", estado, codigo_carta, nome_cidade, populacao, area, pib, pontos_turisticos, densidade, pib_per_capita);
    
    printf("\nCarta 2:\n");
    // Armazenando os valores das variáveis
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    fflush(stdin);
    printf("Digite o código da carta: ");
    scanf(" %s", &codigo_carta);
    fflush(stdin);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);

    // Calculando novos valores
    float densidade2 = populacao / area;
    float pib_per_capita2 = pib / populacao;
    // Exibindo os valores armazenados
    printf("\nEstado: %c", estado);
    printf("\nCódigo: %s", codigo_carta);
    printf("\nNome da Cidade: %s", nome_cidade);
    printf("\nPopulação: %d", populacao);
    printf("\nÁrea: %.2fkm²", area);
    printf("\nPIB: %.2f bilhões de reais", pib);
    printf("\nPontos Turísticos: %d", pontos_turisticos);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita2);
//    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\nDensidade Populacional: %.2f hb/km²\nPIB per Capita: %.2f reais\n", estado, codigo_carta, nome_cidade, populacao, area, pib, pontos_turisticos, densidade, pib_per_capita);
    return 0;
}