#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

    /* Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    Cadastro das Cartas:
    Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.*/

    // Variaveis Carta A
    char estadoA, nomeCidadeA[20], codCartaA[3];
    int populationA, nuPointTuristicA;
    float areaA, PIBA;

    // Variaveis Carta B

    char estadoB, nomeCidadeB[20], codCartaB[3];
    int populationB, nuPointTuristicB;
    float areaB, PIBB;

    void limparBuffer() {
        int c;
        while ((c = getchar()) != '\n' && c != EOF);
    }

    printf("\nInforme o estado A (Obs: uma Letra de A a H):");
    scanf(" %c", &estadoA);
    limparBuffer();
    printf("\nInforme o codigo da carta A ( ex: A01, B03) (de A a H) e (de 1 a 4 ):");
    scanf(" %3s", &codCartaA);
    limparBuffer();

    printf("Informe o nome da cidade A: \n");
    fgets(nomeCidadeA, 20, stdin);
    nomeCidadeA[strcspn(nomeCidadeA, "\n")] = 0;

    printf("\n Informe o numero da populacao A: ");
    scanf(" %d", &populationA);
    limparBuffer();

    printf("\n Informe a area em metros quadrados A: ");
    scanf("%f", &areaA);
    limparBuffer();

    printf("\n Informe o PIB da regioo A: exemplo: 674800000000.0;\n");
    scanf("%f", &PIBA);
    limparBuffer();
    
    printf(" Informe os pontos de turismo para regioo A : \n");
    scanf("%i", &nuPointTuristicA);
    limparBuffer();

    printf("Informe o nome da cidade B: ");
    fgets(nomeCidadeB, 20, stdin);
    nomeCidadeB[strcspn(nomeCidadeB, "\n")] = 0;

    printf("\nInforme o estado B (Obs: uma Letra de A a H): ");
    scanf(" %c", &estadoB);
    limparBuffer();

    printf("\nInforme o codigo da carta B ( ex: A01, B03) (de A a H) e (de 1 a 4 ): \n");
    scanf(" %3s", &codCartaB);
    limparBuffer();

    printf("\nInforme o numero da populacao B: ");
    scanf("%d", &populationB);
    limparBuffer();

    printf("Informe a area em metros quadrados B: ");
    scanf("%f", &areaB);
    limparBuffer();

    printf("\nInforme o PIB da regiao B: exemplo: 300500000000.0");
    scanf("%f", &PIBB);
    limparBuffer();
    
    printf("\n Informe os pontos de turismo para regiao B : ");
    scanf("%i", &nuPointTuristicB);
    limparBuffer();


    //processamento dos dados:
    
    float densidadePopuA, pibPercapiA, densidadePopuB, pibPercapiB;
    densidadePopuA = populationA/areaA;
    pibPercapiA = PIBA/populationA;
    densidadePopuB = populationB/areaB;
    pibPercapiB = PIBB/populationB;

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("-------------------------------Carta-A--------------------------\n");
    printf("Informacoes Carta A:\n");
    printf("Estado A: %c \n", estadoA);
    printf("Codigo do estado A: %s \n", codCartaA);
    printf("Cidade A:%s \n ", nomeCidadeA);
    printf("Populacao Cidade A: %.2i \n", populationA);
    printf("Area Cidade A: %.2f \n", areaA);
    printf("Produto interno bruto - PIB cidade A: %.2f \n",PIBA);
    printf("Pontos turisticos Cidade A: %i \n", nuPointTuristicA);
    printf("Densidade Populacional Carta A: %.2f \n", densidadePopuA);
    printf("Pib Percapita Carta A: %f \n", pibPercapiA);

    printf("\n ----------------------------Carta-B--------------------------\n");

    printf("Informacoes Carta B:\n");
    printf("Estado B: %c \n", estadoB);
    printf("Codigo do estado B: %s \n", codCartaB);
    printf("Cidade B:%s \n ", nomeCidadeB);
    printf("Populacao Cidade B: %.2i \n", populationB);
    printf("Area Cidade B: %.2f \n", areaB) ;
    printf("Produto interno bruto - PIB cidade B: %.2f \n",PIBB);
    printf("Pontos turisticos Cidade B: %i \n", nuPointTuristicB);
    printf("Densidade Populacional Carta B: %.2f \n", densidadePopuB);
    printf("Pib Percapita Carta B: %f \n", pibPercapiB);
    printf("--------------------------------------------------------------- ");
    return 0;
 };
