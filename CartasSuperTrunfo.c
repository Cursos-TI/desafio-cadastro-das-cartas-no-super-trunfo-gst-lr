#include <stdio.h>
#include <string.h>
 
int main() {
    //Inicializa variáveis para a primeira carta
    char estadoCarta1;
    char codigoCarta1[4];
    char nomeCidadeCarta1[64];
    unsigned long int numeroHabitantesCarta1;
    float areaCarta1;
    float pibCarta1;
    int pontosTuristicosCarta1;
    float densidadePopulacionalCarta1;
    float pibPerCapitaCarta1;
    //Inicializa variáveis para a segunda carta
    char estadoCarta2;
    char codigoCarta2[4];
    char nomeCidadeCarta2[64];
     unsigned long int numeroHabitantesCarta2;
    float areaCarta2;
    float pibCarta2;
    int pontosTuristicosCarta2;
    float densidadePopulacionalCarta2;
    float pibPerCapitaCarta2;
    //Mensagem de Boas-Vindas
    printf("Seja Bem-Vindo ao Super Trunfo!\n");
    //Input e Output da primeira Carta
    printf("Carta 1:\nInsira o Estado(uma letra de A-H): \n");
    scanf("%c", &estadoCarta1);

    printf("Insira o Código da Carta(letra do estado seguida de um número de 01 a 04, ex: A01): \n");
    scanf("%s", &codigoCarta1);
    getchar(); //Input Buffer flush antes do fgets

    printf("Insira o Nome da Cidade: \n");
    fgets(nomeCidadeCarta1, 64, stdin);
    nomeCidadeCarta1[strlen(nomeCidadeCarta1)-1] = '\0'; //Remove newline do input do fgets

    printf("Insira o Número de Habitantes: \n");
    scanf("%i", &numeroHabitantesCarta1);
    printf("Insira a Área(em km²): \n");
    scanf("%f", &areaCarta1);

    printf("Insira o PIB da Cidade(em bilhões de reais): \n");
    scanf("%f", &pibCarta1);

    printf("Insira a quantidade de Pontos Turísticos na cidade: \n");
    scanf("%i", &pontosTuristicosCarta1);
    getchar(); //Input Buffer flush antes de scanf com %c

    //Input e Output da segunda carta
    printf("Carta 2:\nInsira o Estado(uma letra de A-H): \n");
    scanf("%c", &estadoCarta2);

    printf("Insira o Código da Carta(letra do estado seguida de um número de 01 a 04, ex: A01): \n");
    scanf("%s", &codigoCarta2);
    getchar(); //Input Buffer flush antes do fgets

    printf("Insira o Nome da Cidade: \n");
    fgets(nomeCidadeCarta2, 64, stdin);
    nomeCidadeCarta2[strlen(nomeCidadeCarta2)-1] = '\0'; //Remove newline do input do fgets

    printf("Insira o Número de Habitantes: \n");
    scanf("%i", &numeroHabitantesCarta2);

    printf("Insira a Área(em km²): \n");
    scanf("%f", &areaCarta2);

    printf("Insira o PIB da Cidade(em bilhões de reais): \n");
    scanf("%f", &pibCarta2);

    printf("Insira a quantidade de Pontos Turísticos na cidade: \n");
    scanf("%i", &pontosTuristicosCarta2);

    //Atualiza os valores das variáveis de densidade populacional, PIB per capita e Super Poder
    densidadePopulacionalCarta1 = (float)numeroHabitantesCarta1/areaCarta1;
    densidadePopulacionalCarta2 = (float)numeroHabitantesCarta2/areaCarta2;
    pibPerCapitaCarta1 = pibCarta1/numeroHabitantesCarta1;
    pibPerCapitaCarta2 = pibCarta2/numeroHabitantesCarta2;

    //Exibe as informações da primeira carta
    printf("\nCarta 1:");
    printf("\nEstado: %c", estadoCarta1);
    printf("\nCódigo: %s", codigoCarta1);
    printf("\nNome da Cidade: %s", nomeCidadeCarta1);
    printf("\nPopulação: %i habitantes", numeroHabitantesCarta1);
    printf("\nÁrea: %.2f km²", areaCarta1);
    printf("\nPIB: %.2f bilhões de reais", pibCarta1);
    printf("\nNúmero de Pontos Turísticos: %i", pontosTuristicosCarta1);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacionalCarta1);
    printf("\nPIB per Capita: %.2f bilhões de reais", pibPerCapitaCarta1);

    //Exibe as informações da segunda carta
    printf("\n\nCarta 2:");
    printf("\nEstado: %c", estadoCarta2);
    printf("\nCódigo: %s", codigoCarta2);
    printf("\nNome da Cidade: %s", nomeCidadeCarta2);
    printf("\nPopulação: %i habitantes", numeroHabitantesCarta2);
    printf("\nÁrea: %.2f km²", areaCarta2);
    printf("\nPIB: %.2f bilhões de reais", pibCarta2);
    printf("\nNúmero de Pontos Turísticos: %i", pontosTuristicosCarta2);
    printf("\nDensidade Populacional: %.2f hab/km²", densidadePopulacionalCarta2);
    printf("\nPIB per Capita: %.2f bilhões de reais", pibPerCapitaCarta2);

    //Escolha do primeiro atributo
    char atributo1;

    printf("\n\nEscolha o primeiro atributo a ser comparado:\n");
    printf("-População(digite '1')\n-Área(digite '2')\n-PIB(digite '3')\n-Número de Pontos Turísticos(digite '4')\n-Densidade Populacional(digite '5')\n");
    getchar(); //Input Buffer flush antes do scanf
    scanf("%c", &atributo1);

    //Exibe as comparações de cada atributo
    switch(atributo1){
        case '1':
            printf("\nComparação de cartas (Atributo: População):");
            printf("\nCarta 1 - %s: %i habitantes", nomeCidadeCarta1, numeroHabitantesCarta1);
            printf("\nCarta 2 - %s: %i habitantes", nomeCidadeCarta2, numeroHabitantesCarta2);
            if(numeroHabitantesCarta1 > numeroHabitantesCarta2){
                printf("\nResultado: Carta 1 - %s: %i habitantes", nomeCidadeCarta1, numeroHabitantesCarta1);
            } else if(numeroHabitantesCarta1 < numeroHabitantesCarta2){
                printf("\nResultado: Carta 2 - %s: %i habitantes", nomeCidadeCarta2, numeroHabitantesCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            
            break;
        case '2':
            printf("\nComparação de cartas (Atributo: Área):");
            printf("\nCarta 1 - %s: %.2f km²", nomeCidadeCarta1, areaCarta1);
            printf("\nCarta 2 - %s: %.2f km²", nomeCidadeCarta2, areaCarta2);
            if(areaCarta1 > areaCarta2){
                printf("\nResultado: Carta 1 - %s: %.2f km²", nomeCidadeCarta1, areaCarta1);
            } else if(areaCarta1 < areaCarta2){
                printf("\nResultado: Carta 2 - %s: %.2f km²", nomeCidadeCarta2, areaCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        case '3':
            printf("\nComparação de cartas (Atributo: PIB):");
            printf("\nCarta 1 - %s: %.2f bilhões de reais", nomeCidadeCarta1, pibCarta1);
            printf("\nCarta 2 - %s: %.2f bilhões de reais", nomeCidadeCarta2, pibCarta2);
            if(pibCarta1 > pibCarta2){
                printf("\nResultado: Carta 1 - %s: %.2f bilhões de reais", nomeCidadeCarta1, pibCarta1);
            } else if(pibCarta1 < pibCarta2){
                printf("\nResultado: Carta 2 - %s: %.2f bilhões de reais", nomeCidadeCarta2, pibCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        case '4':
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):");
            printf("\nCarta 1 - %s: %i", nomeCidadeCarta1, pontosTuristicosCarta1);
            printf("\nCarta 2 - %s: %i", nomeCidadeCarta2, pontosTuristicosCarta2);
            if(pontosTuristicosCarta1 > pontosTuristicosCarta2){
                printf("\nResultado: Carta 1 - %s: %i", nomeCidadeCarta1, pontosTuristicosCarta1);
            } else if(pontosTuristicosCarta1 < pontosTuristicosCarta2){
                printf("\nResultado: Carta 2 - %s: %i", nomeCidadeCarta2, pontosTuristicosCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        case '5':
            printf("\nComparação de cartas (Atributo: Densidade Populacional):");
            printf("\nCarta 1 - %s: %.2f hab/km²", nomeCidadeCarta1, densidadePopulacionalCarta1);
            printf("\nCarta 2 - %s: %.2f hab/km²", nomeCidadeCarta2, densidadePopulacionalCarta2);
            if(densidadePopulacionalCarta1 < densidadePopulacionalCarta2){
                printf("\nResultado: Carta 1 - %s: %.2f hab/km²", nomeCidadeCarta1, densidadePopulacionalCarta1);
            } else if(densidadePopulacionalCarta1 > densidadePopulacionalCarta2){
                printf("\nResultado: Carta 2 - %s: %.2f hab/km²", nomeCidadeCarta2, densidadePopulacionalCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        default:
            printf("Opção inválida\n");
    }

    //Mostra opções do segundo atributo
    char atributo2;
    printf("\n\nEscolha o segundo atributo a ser comparado:\n");
    switch(atributo1){
        case '1':
            printf("-Área(digite '2')\n-PIB(digite '3')\n-Número de Pontos Turísticos(digite '4')\n-Densidade Populacional(digite '5')\n");
            break;
        case '2':
            printf("-População(digite '1')\n-PIB(digite '3')\n-Número de Pontos Turísticos(digite '4')\n-Densidade Populacional(digite '5')\n");
            break;
        case '3':
            printf("-População(digite '1')\n-Área(digite '2')\n-Número de Pontos Turísticos(digite '4')\n-Densidade Populacional(digite '5')\n");
            break;
        case '4':
            printf("-População(digite '1')\n-Área(digite '2')\n-PIB(digite '3')\n-Densidade Populacional(digite '5')\n");
            break;
        case '5':
            printf("-População(digite '1')\n-Área(digite '2')\n-PIB(digite '3')\n-Número de Pontos Turísticos(digite '4')\n");
            break;
    }

    getchar(); //Input Buffer flush antes do scanf
    scanf("%c", &atributo2);

    //Exibe as comparações de cada atributo
    switch(atributo2){
        case '1':
            if(atributo2==atributo1){
                printf("Atributo já escolhido\n");
                break;
            }
            printf("\nComparação de cartas (Atributo: População):");
            printf("\nCarta 1 - %s: %i habitantes", nomeCidadeCarta1, numeroHabitantesCarta1);
            printf("\nCarta 2 - %s: %i habitantes", nomeCidadeCarta2, numeroHabitantesCarta2);
            if(numeroHabitantesCarta1 > numeroHabitantesCarta2){
                printf("\nResultado: Carta 1 - %s: %i habitantes", nomeCidadeCarta1, numeroHabitantesCarta1);
            } else if(numeroHabitantesCarta1 < numeroHabitantesCarta2){
                printf("\nResultado: Carta 2 - %s: %i habitantes", nomeCidadeCarta2, numeroHabitantesCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            
            break;
        case '2':
            if(atributo2==atributo1){
                printf("Atributo já escolhido\n");
                break;
            }
            printf("\nComparação de cartas (Atributo: Área):");
            printf("\nCarta 1 - %s: %.2f km²", nomeCidadeCarta1, areaCarta1);
            printf("\nCarta 2 - %s: %.2f km²", nomeCidadeCarta2, areaCarta2);
            if(areaCarta1 > areaCarta2){
                printf("\nResultado: Carta 1 - %s: %.2f km²", nomeCidadeCarta1, areaCarta1);
            } else if(areaCarta1 < areaCarta2){
                printf("\nResultado: Carta 2 - %s: %.2f km²", nomeCidadeCarta2, areaCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        case '3':
            if(atributo2==atributo1){
                printf("Atributo já escolhido\n");
                break;
            }
            printf("\nComparação de cartas (Atributo: PIB):");
            printf("\nCarta 1 - %s: %.2f bilhões de reais", nomeCidadeCarta1, pibCarta1);
            printf("\nCarta 2 - %s: %.2f bilhões de reais", nomeCidadeCarta2, pibCarta2);
            if(pibCarta1 > pibCarta2){
                printf("\nResultado: Carta 1 - %s: %.2f bilhões de reais", nomeCidadeCarta1, pibCarta1);
            } else if(pibCarta1 < pibCarta2){
                printf("\nResultado: Carta 2 - %s: %.2f bilhões de reais", nomeCidadeCarta2, pibCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        case '4':
            if(atributo2==atributo1){
                printf("Atributo já escolhido\n");
                break;
            }
            printf("\nComparação de cartas (Atributo: Pontos Turísticos):");
            printf("\nCarta 1 - %s: %i", nomeCidadeCarta1, pontosTuristicosCarta1);
            printf("\nCarta 2 - %s: %i", nomeCidadeCarta2, pontosTuristicosCarta2);
            if(pontosTuristicosCarta1 > pontosTuristicosCarta2){
                printf("\nResultado: Carta 1 - %s: %i", nomeCidadeCarta1, pontosTuristicosCarta1);
            } else if(pontosTuristicosCarta1 < pontosTuristicosCarta2){
                printf("\nResultado: Carta 2 - %s: %i", nomeCidadeCarta2, pontosTuristicosCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        case '5':
            if(atributo2==atributo1){
                printf("Atributo já escolhido\n");
                break;
            }
            printf("\nComparação de cartas (Atributo: Densidade Populacional):");
            printf("\nCarta 1 - %s: %.2f hab/km²", nomeCidadeCarta1, densidadePopulacionalCarta1);
            printf("\nCarta 2 - %s: %.2f hab/km²", nomeCidadeCarta2, densidadePopulacionalCarta2);
            if(densidadePopulacionalCarta1 < densidadePopulacionalCarta2){
                printf("\nResultado: Carta 1 - %s: %.2f hab/km²", nomeCidadeCarta1, densidadePopulacionalCarta1);
            } else if(densidadePopulacionalCarta1 > densidadePopulacionalCarta2){
                printf("\nResultado: Carta 2 - %s: %.2f hab/km²", nomeCidadeCarta2, densidadePopulacionalCarta2);
            } else {
                printf("\nResultado: Empate!");
            }
            break;
        default:
            printf("Opção inválida\n");
    }

    float atributo1Carta1, atributo1Carta2;
    float atributo2Carta1, atributo2Carta2;
    //Associa valores às variáveis para fazer a soma
    switch (atributo1)
    {
        case '1': atributo1Carta1 = numeroHabitantesCarta1; atributo1Carta2 = numeroHabitantesCarta2; break;
        case '2': atributo1Carta1 = areaCarta1; atributo1Carta2 = areaCarta2; break;
        case '3': atributo1Carta1 = pibCarta1; atributo1Carta2 = pibCarta2; break;
        case '4': atributo1Carta1 = pontosTuristicosCarta1; atributo1Carta2 = pontosTuristicosCarta2; break;
        case '5': atributo1Carta1 = densidadePopulacionalCarta1; atributo1Carta2 = -densidadePopulacionalCarta2; break;
        default:
            break;
    }
    switch (atributo2)
    {
        case '1': atributo2Carta1 = numeroHabitantesCarta1; atributo2Carta2 = numeroHabitantesCarta2; break;
        case '2': atributo2Carta1 = areaCarta1; atributo2Carta2 = areaCarta2; break;
        case '3': atributo2Carta1 = pibCarta1; atributo2Carta2 = pibCarta2; break;
        case '4': atributo2Carta1 = pontosTuristicosCarta1; atributo2Carta2 = pontosTuristicosCarta2; break;
        case '5': atributo2Carta1 = densidadePopulacionalCarta1; atributo2Carta2 = -densidadePopulacionalCarta2; break;
        default:
            break;
    }
    float somaCarta1 = atributo1Carta1+atributo2Carta1;
    float somaCarta2 = atributo1Carta2+atributo2Carta2;
    //Realiza a soma
    printf("\n\nSoma dos atributos:\n");
    printf("Carta 1 - Soma: %.2f\n", somaCarta1);
    printf("Carta 2 - Soma: %.2f\n", somaCarta2);
    //Determina o vencedor
    if(somaCarta1 > somaCarta2){
        printf("Resultado: Carta 1 venceu!");
    } else if(somaCarta1 < somaCarta2){
        printf("Resultado: Carta 2 venceu!");
    } else{
        printf("\nResultado: Empate!");
    }

    printf("\n\nPressione Enter para sair...");

    getchar(); //Input Buffer flush
    getchar(); //Espera input do usuário para fechar a aplicação

    return 0;
}
