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
    printf("\nPIB per Capita: %.2f\n\n", pib_per_capita2);

    // Definindo a carta vencendora baseada na escolha do usuário
    int escolha;
    int escolha2;

    printf("Esolha um atributo a da carta 1:\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n6. Sair\n");
    printf("-> ");
    scanf("%d", &escolha);

    switch (escolha){
    case 1:
        printf("\nEscolha um atributo para a carta 2:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        printf("-> ");
        scanf("%d", &escolha2);
        if (escolha == escolha2){
            printf("\nEste atributo já foi escolhido para a Carta 1 (%s), escolha outro atributo para a Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        } else if(escolha2 == 2){
            populacao > area2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 3){
            populacao > pib2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 4){
            populacao > pontos_turisticos2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 5){
            populacao > densidade2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        }
    break;
    case 2:
    printf("Escolha um atributo para a carta 2:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        printf("-> ");
        scanf("%d", &escolha2);
        if (escolha == escolha2){
            printf("\nEste atributo já foi escolhido para a Carta 1 (%s), escolha outro atributo para a Carta 2 (%s)\n\n", nome_cidade, nome_cidade2);
        } else if(escolha2 == 1){
            area > populacao2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 3){
            area > pib2 ? printf("A carta 1 (%s) venceu!\n", nome_cidade) : printf("A carta 2 (%s) venceu!\n", nome_cidade2);
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 4){
            area > pontos_turisticos2 ? printf("A carta 1 (%s) venceu!\n", nome_cidade) : printf("A carta 2 (%s) venceu!\n", nome_cidade2);
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 5){
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        }
    break;
    case 3:
    printf("Escolha um atributo para a carta 2:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        printf("-> ");
        scanf("%d", &escolha2);
        if (escolha == escolha2){
            printf("Este atributo já foi escolhido para a Carta 1 (%s), escolha outro atributo para a Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        } else if(escolha2 == 1){
            pib > populacao2 ? printf("A carta 1 (%s) venceu!\n", nome_cidade) : printf("A carta 2 (%s) venceu!\n", nome_cidade2);
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 2){
            pib > area2 ? printf("A carta 1 (%s) venceu!\n", nome_cidade) : printf("A carta 2 (%s) venceu!\n", nome_cidade2);
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 4){
            pib > pontos_turisticos2 ? printf("A carta 1 (%s)venceu!\n", nome_cidade) : printf("A carta 2 (%s) venceu!\n", nome_cidade2);
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 5){
            pib > densidade2 ? printf("A carta 1 (%s) venceu!\n", nome_cidade) : printf("A carta 2 (%s) venceu!\n", nome_cidade2);
            printf("Soma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        }
    break;
    case 4:
        printf("Escolha um atributo para a carta 2:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        printf("-> ");
        scanf("%d", &escolha2);
        if (escolha == escolha2){
            printf("Este atributo já foi escolhido para a Carta 1 (%s), escolha outro atributo para a Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        } else if(escolha2 == 1){
            pontos_turisticos > populacao2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 2){
            pontos_turisticos > area2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 3){
            pontos_turisticos > pib2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 5){
            pontos_turisticos > densidade2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        }
    break;
    case 5:
        printf("Escolha um atributo para a carta 2:\n");
        printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Demográfica\n");
        printf("-> ");
        scanf("%d", &escolha2);
        if (escolha == escolha2){
            printf("\nEste atributo já foi escolhido para a Carta 1 (%s), escolha outro atributo para a Carta 2 (%s)\n", nome_cidade, nome_cidade2);
        } else if(escolha2 == 1){
            densidade > populacao2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            } else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 2){
            densidade > area2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("\nA carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            }
            else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 3){
            densidade > pib2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            }
            else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        } else if(escolha2 == 4){
            densidade > pontos_turisticos2 ? printf("\nA carta 1 (%s) venceu!\n", nome_cidade) : printf("\nA carta 2 (%s) venceu!\n", nome_cidade2);
            printf("\nSoma dos atributos da carta 1: %.2lf\n", super_poder1);
            printf("Soma dos atributos da carta 2: %.2lf\n\n", super_poder2);
            if (super_poder1 > super_poder2){
                printf("A carta 1 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade, super_poder1);
            }
            else if(super_poder1 == super_poder2){
                printf("As cartas empataram!\n\n");
            } else{
                printf("A carta 2 (%s) venceu, tendo mais de %.2lf pontos\n\n", nome_cidade2, super_poder2);
            }
        }
    break;
    default:
        printf("Saindo...\n\n");
    break;
    }
}