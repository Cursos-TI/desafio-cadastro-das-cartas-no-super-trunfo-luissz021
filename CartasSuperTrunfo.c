#include <stdio.h>

int main(){
    // Criando as variáveis necessárias para o jogo
    char estado;
    char codigo_carta[3];
    char nome_cidade[40];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos_turisticos;
    // Armazenando os valores das variáveis
    printf("Digite o estado: ");
    scanf(" %c", &estado);
    fflush(stdin);
    printf("Digite o código da carta: ");
    scanf(" %s", &codigo_carta);
    fflush(stdin);
    printf("Digite o nome da cidade: ");
    scanf(" %s", &nome_cidade);
    printf("Digite a população: ");
    scanf("%d", &populacao);
    printf("Digite a área: ");
    scanf("%f", &area);
    printf("Digite o PIB: ");
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos);
    
    // Calculando novos valores
    float densidade = (float)populacao / area;
    float pib_per_capita = pib / (float)populacao;
    
    // Exibindo os valores armazenados
    printf("\n\nEstado: %c\n", estado);
    printf("Código: %s\n", codigo_carta);
    printf("Nome da Cidade: %s\n", nome_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2fkm²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade);
    printf("PIB per Capita: %.2f\n", pib_per_capita);

    // Armazenando dados
    float inverso1 = 1 / populacao;
    double super_poder1 = (float)populacao + (float)area + (float)pib + (float)pontos_turisticos + (float)pib_per_capita + inverso1;

    printf("\nCarta 2:\n");
    // Armazenando os valores das variáveis
    char estado2;
    char codigo_carta2[3];
    char nome_cidade2[40];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    // Armazenando os valores das variáveis
    printf("Digite o estado: ");
    scanf(" %c", &estado2);
    fflush(stdin);
    printf("Digite o código da carta: ");
    scanf(" %s", &codigo_carta2);
    fflush(stdin);
    printf("Digite o nome da cidade: ");
    scanf("%s", &nome_cidade2);
    printf("Digite a população: ");
    scanf("%d", &populacao2);
    printf("Digite a área: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calculando novos valores
    float densidade2 = (float)populacao2 / area2;
    float pib_per_capita2 = pib2 / (float)populacao2;

    // Armazenando dados
    float inverso2 = 1 / populacao2;
    double super_poder2 = (float)populacao2 + (float)area2 + (float)pib2 + (float)pontos_turisticos2 + (float)pib_per_capita2 + inverso2;

    // Exibindo os valores armazenados
    printf("\nEstado: %c", estado2);
    printf("\nCódigo: %s", codigo_carta2);
    printf("\nNome da Cidade: %s", nome_cidade2);
    printf("\nPopulação: %d", populacao2);
    printf("\nÁrea: %.2fkm²", area2);
    printf("\nPIB: %.2f bilhões de reais", pib2);
    printf("\nPontos Turísticos: %d", pontos_turisticos2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidade2);
    printf("\nPIB per Capita: %.2f\n", pib_per_capita2);

    /*
    // Verificando quem é o vencedor
    printf("\nCarta Vencedora: \n\n");
    (populacao > populacao2) ? printf("População: Carta 1 (%d)\n", populacao > populacao2) : printf("População: Carta 2 (%d)\n", populacao > populacao2);
    (area > area2) ? printf("Área: Carta 1 (%d)\n", area > area2) : printf("Área: Carta 2 (%d)\n", area > area2);
    (pib > pib2) ? printf("PIB: Carta 1 (%d)\n", pib > pib2) : printf("PIB: Carta 2 (%d)\n", pib > pib2);
    (pontos_turisticos > pontos_turisticos2) ? printf("Pontos Turísticos: Carta 1 (%d)\n", pontos_turisticos > pontos_turisticos2) : printf("Pontos Turísticos: Carta 2 (%d)\n", pontos_turisticos > pontos_turisticos2);
    (pib_per_capita > pib_per_capita2) ? printf("PIB per Capita: Carta 1 (%d)\n", pib_per_capita > pib_per_capita2) : printf("PIB per Capita: Carta 2 (%d)\n", pib_per_capita > pib_per_capita2);
    (super_poder1 > super_poder2) ? printf("Super Poder: Carta 1 (%d)\n", super_poder1 > super_poder2) : printf("Super Poder: Carta 2 (%d)\n", super_poder1 > super_poder2);

    // Definindo carta vencedora baseada em qual carta possui maior população
    printf("\nEscolhendo carta vencedora baseada na população...\n");
    if (populacao > populacao2){
        printf("Carta 1 - %s: %d\n\n", nome_cidade, populacao);
    } else {
        printf("Carta 2 - %s: %d\n\n", nome_cidade2, populacao2);
    }
*/

    // Definindo a carta vencendora baseada na escolha do usuário
    int escolha;
    printf("\nCarta 1: %s - Carta 2: %s\n", nome_cidade, nome_cidade2);
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
    printf("Escolha o critério que desejam comparar: ");
    scanf("%d", &escolha);
    switch (escolha){
    case 1:
        printf("\nCarta 1 (%s) ----- Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        printf("\nCritério de comparação 'População'\n");
        printf("Valor Carta 1: %d -------- Carta 2: %d", populacao, populacao2);
        if(populacao > populacao2){
            printf("Carta 1 (%s) é a vencedora!!\n", nome_cidade);
        } else if(populacao == populacao2) {
            printf("As duas cartas deram EMPATE!!\n");
        } else {
            printf("Carta 2 (%s) é a vencedora!!\n", nome_cidade2);
        }
    break;
        case 2:
        printf("\nCarta 1 (%s) ----- Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        printf("Critério de comparação 'Área'\n");
        printf("Valor Carta 1: %.2f -------- Carta 2: %.2f\n", area, area2);
        if(area > area2){
            printf("Carta 1 (%s) é a vencedora!!\n", nome_cidade);
        } else if(area == area2) {
            printf("As duas cartas deram EMPATE!!\n");
        } else {
            printf("Carta 2 (%s) é a vencedora!!\n", nome_cidade2);
        }
    break;
    case 3:
        printf("\nCarta 1 (%s) ----- Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        printf("Critério de comparação 'PIB'\n");
        printf("Valor Carta 1: %.2f -------- Carta 2: %.2f\n", pib, pib2);
        if(pib > pib2){
            printf("Carta 1 (%s) é a vencedora!!\n", nome_cidade);
        } else if(pib == pib2) {
            printf("As duas cartas deram EMPATE!!\n");
        } else {
            printf("Carta 2 (%s) é a vencedora!!\n", nome_cidade2);
        }
    break;
    case 4:
        printf("\nCarta 1 (%s) ----- Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        printf("Critério de comparação 'Pontos Turisticos'\n");
        printf("Valor Carta 1: %d -------- Carta 2: %d\n", pontos_turisticos, pontos_turisticos2);
        if(pontos_turisticos > pontos_turisticos2){
            printf("Carta 1 (%s) é a vencedora!!\n", nome_cidade);
        } else if(pontos_turisticos == pontos_turisticos2) {
            printf("As duas cartas deram EMPATE!!\n");
        } else {
            printf("Carta 2 (%s) é a vencedora!!\n", nome_cidade2);
        }
    break;
    case 5:
        printf("\nCarta 1 (%s) ----- Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        printf("Critério de comparação 'Densidade Demográfica'\n");
        printf("Valor Carta 1: %.2f -------- Carta 2: %.2f\n", densidade, densidade2);
        if(densidade > densidade2){
            printf("Carta 2 (%s) é a vencedora!!\n", nome_cidade2);
        } else if(densidade == densidade2) {
            printf("As duas cartas deram EMPATE!!\n");
        } else {
            printf("Carta 1 (%s) é a vencedora!!\n", nome_cidade);
        }
    break;
    default:
        printf("Opção incorreta!\n\n");
        break;
    }
    return 0;
}