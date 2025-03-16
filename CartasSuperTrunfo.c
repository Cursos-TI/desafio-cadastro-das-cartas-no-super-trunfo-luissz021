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
    fflush(stdin);
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    fflush(stdin);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta);
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
    // Exibindo os valores armazenados
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado, codigo_carta, nome_cidade, populacao, area, pib, pontos_turisticos);
    
    printf("\nCarta 2:\n");
    // Armazenando os valores das variáveis
    fflush(stdin);
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    fflush(stdin);
    printf("Digite o código da carta: ");
    scanf("%s", &codigo_carta);
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
    // Exibindo os valores armazenados
    printf("\nCarta 1:\nEstado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nÁrea: %.2fkm²\nPIB: %.2f bilhões de reais\nPontos Turísticos: %d\n", estado, codigo_carta, nome_cidade, populacao, area, pib, pontos_turisticos);
    return 0;
}