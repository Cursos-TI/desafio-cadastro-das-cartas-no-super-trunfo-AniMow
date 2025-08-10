#include <stdio.h>

/*Criar Variáveis para 2 Cartas*/
char estado1, estado2;
char cod_carta1[5], cod_carta2[5], nome_cidade1[100], nome_cidade2[100];
int populacao1, populacao2, num_ptur1, num_ptur2;
float area_km1, area_km2, pib1, pib2;

int main () {

    /*Receber valores das Variáveis*/

    /*Cidade 1*/
    printf("Insira as informacoes da primeira carta de cidade. \n");

    printf("Digite a letra do primeiro Estado: ");
    scanf(" %c", &estado1);

    printf("Digite o Codigo da primeira carta: ");
    scanf(" %4s", &cod_carta1);

    printf("Digite o Nome da primeira cidade: ");
    scanf("s", nome_cidade1);
    /*fgets(nome_cidade1, sizeof(nome_cidade1), stdin);*/

    printf("Digite o numero da primeira Populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a Area da primeira cidade: ");
    scanf("%.2f", &area_km1);

    printf("Digite o PIB da primeira cidade: ");
    scanf("%.2f", &pib1);

    printf("Digite o numero de Pontos turisticos na primeira cidade: ");
    scanf("%d", &num_ptur1);

    /* Cidade 2*/
    printf("Insira as informacoes da segunda carta de cidade. ");
    
    printf("Digite a letra do segundo Estado: ");
    scanf(" %c", &estado2);

    printf("Digite o Codigo da segunda carta: ");
    scanf("%4s", &cod_carta2);

    printf("Digite o Nome da segunda cidade: ");
    scanf("s", nome_cidade1);
    /*fgets(nome_cidade2, sizeof(nome_cidade2), stdin);*/

    printf("Digite o numero da segunda Populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a Area da segunda cidade: ");
    scanf("%.2f", &area_km2);

    printf("Digite o PIB da segunda cidade: ");
    scanf("%.2f", &pib2);

    printf("Digite o numero de Pontos turisticos na segunda cidade: ");
    scanf("%d", &num_ptur2);

    /*Mostrar os valores das Cartas das cidade, de forma individual*/
    
    printf("\nCarta 1: \nEstado: %c \nCodigo: %s \nNome da cidade: %s \nPopulacao: %d \n", estado1, cod_carta1, nome_cidade1, populacao1);
    printf("Area: %f \nPIB: %f \nNumero de pontos turisticos: %d\n", area_km1, pib1, num_ptur1);

    printf("\nCarta 2: \nEstado: %c \nCodigo: %s \nNome da cidade: %s \nPopulacao: %d \n", estado2, cod_carta2, nome_cidade2, populacao2);
    printf("Area: %f \nPIB: %f \nNumero de pontos turisticos: %d\n", area_km2, pib2, num_ptur2);

    return 0;

}