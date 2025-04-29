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
    float superPoderCarta1;
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
    float superPoderCarta2;
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

    //Calcula o super poder; quanto menor a densidade populacional, maior o valor total
    superPoderCarta1 = (float)numeroHabitantesCarta1 + areaCarta1 + pibCarta1 + (float)pontosTuristicosCarta1 + pibPerCapitaCarta1 - densidadePopulacionalCarta1;
    superPoderCarta2 = (float)numeroHabitantesCarta2 + areaCarta2 + pibCarta2 + (float)pontosTuristicosCarta2 + pibPerCapitaCarta2 - densidadePopulacionalCarta2;

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

    //Exibe comparação entre as cartas
    printf("\n\nComparação de Cartas:");
    printf("\nPopulação: Carta %i venceu!", (numeroHabitantesCarta1 > numeroHabitantesCarta2) ? 1:2);
    printf("\nÁrea: Carta %i venceu!", (areaCarta1 > areaCarta2) ? 1:2);
    printf("\nPIB: Carta %i venceu!", (pibCarta1 > pibCarta2) ? 1:2);
    printf("\nNúmero de Pontos Turísticos: Carta %i venceu!", (pontosTuristicosCarta1 > pontosTuristicosCarta2) ? 1:2);
    printf("\nDensidade Populacional: Carta %i venceu!", (densidadePopulacionalCarta1 > densidadePopulacionalCarta2) ? 2:1);
    printf("\nPIB per Capita: Carta %i venceu!", (pibPerCapitaCarta1 > pibPerCapitaCarta2) ? 1:2);
    printf("\nSuper Poder: Carta %i venceu!", (superPoderCarta1 > superPoderCarta2) ? 1:2);

    printf("\n\nPressione Enter para sair...");

    getchar(); //Input Buffer flush
    getchar(); //Espera input do usuário para fechar a aplicação

    return 0;
}
