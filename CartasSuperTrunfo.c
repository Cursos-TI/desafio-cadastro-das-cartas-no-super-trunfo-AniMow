#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

//Criar Variáveis para 2 Cartas:

char estado1, estado2;
char cod_carta1[5], cod_carta2[5], nome_cidade1[100], nome_cidade2[100];
int populacao1, populacao2, num_ptur1, num_ptur2;
float area_km1, area_km2, pib1, pib2;

int main () {

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    //Receber valores das Variáveis

    //Cidade 1:
    printf("Insira as informacoes da primeira carta de cidade. \n");

    printf("Digite a letra do primeiro Estado: ");
    scanf(" %c", &estado1);
    getchar();

    printf("Digite o Codigo da primeira carta: ");
    scanf("%4s", cod_carta1);
    getchar();

    printf("Digite o Nome da primeira cidade: ");
    fgets(nome_cidade1, sizeof(nome_cidade1), stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';

    printf("Digite o numero da primeira Populacao: ");
    scanf("%d", &populacao1);
    getchar();

    printf("Digite a Area da primeira cidade: ");
    scanf("%f", &area_km1);
    getchar();

    printf("Digite o PIB da primeira cidade: ");
    scanf("%f", &pib1);
    getchar();

    printf("Digite o numero de Pontos turisticos na primeira cidade: ");
    scanf("%d", &num_ptur1);
    getchar();

    //Cidade 2:
    printf("Insira as informacoes da segunda carta de cidade. \n");
    
    printf("Digite a letra do segundo Estado: ");
    scanf(" %c", &estado2);
    getchar();

    printf("Digite o Codigo da segunda carta: ");
    scanf("%4s", cod_carta2);
    getchar();

    printf("Digite o Nome da segunda cidade: ");
    fgets(nome_cidade2, sizeof(nome_cidade2), stdin);
    nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';

    printf("Digite o numero da segunda Populacao: ");
    scanf("%d", &populacao2);
    getchar();

    printf("Digite a Area da segunda cidade: ");
    scanf("%f", &area_km2);
    getchar();

    printf("Digite o PIB da segunda cidade: ");
    scanf("%f", &pib2);
    getchar();

    printf("Digite o numero de Pontos turisticos na segunda cidade: ");
    scanf("%d", &num_ptur2);
    getchar();

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Mostrar os valores das Cartas das cidade, de forma individual
    
    printf("\nCarta 1: \nEstado: %c \nCodigo: %s \nNome da cidade: %s \nPopulacao: %d \n", estado1, cod_carta1, nome_cidade1, populacao1);
    printf("Area: %.2f \nPIB: %.2f \nNumero de pontos turisticos: %d\n", area_km1, pib1, num_ptur1);

    printf("\nCarta 2: \nEstado: %c \nCodigo: %s \nNome da cidade: %s \nPopulacao: %d \n", estado2, cod_carta2, nome_cidade2, populacao2);
    printf("Area: %.2f \nPIB: %.2f \nNumero de pontos turisticos: %d\n", area_km2, pib2, num_ptur2);

    return 0;

}