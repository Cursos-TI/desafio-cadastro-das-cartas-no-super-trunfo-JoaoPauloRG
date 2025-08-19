#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {
    // Variáveis para Carta 01
    char estado_01[10]; 
    char codigo_01[10];
    char nome_cd1[50];
    int pop_01;
    float area_01, pib_01;
    int num_p_turist_01;

    // Variáveis para Carta 02
    char estado_02[10];
    char codigo_02[10];
    char nome_cd2[50];
    int pop_02;
    float area_02, pib_02;
    int num_p_turist_02;

    // Cadastro Carta 01
    printf("Preencha os Dados da Carta 01:\n");
    printf("Informe o Estado (A - H): \n");
    scanf("%s", estado_01);
    printf("Informe o Codigo (ex: A01): \n");
    scanf(" %s", codigo_01);
    printf("Informe o Nome da Cidade: \n");
    scanf("%s", nome_cd1); 
    printf("Informe a Populacao: \n");
    scanf("%d", &pop_01);
    printf("Informe a Area da Cidade (km²): \n");
    scanf("%f", &area_01);
    printf("Informe o PIB da Cidade: \n");
    scanf("%f", &pib_01);
    printf("Informe a Quantidade de pontos turisticos: \n");
    scanf("%d", &num_p_turist_01);
    printf("\n-----------------------------------------------------\n");

    // Cadastro Carta 02
    printf("Preencha os Dados da Carta 02:\n");
    printf("Informe o Estado (A - H): \n");
    scanf(" %s", estado_02);
    printf("Informe o Codigo (ex: B03): \n");
    scanf("%s", codigo_02);
    printf("Informe o Nome da Cidade: \n");
    scanf("%s", nome_cd2);
    printf("Informe a Populacao: \n");
    scanf("%d", &pop_02);
    printf("Informe a Area da Cidade (km²): \n");
    scanf("%f", &area_02);
    printf("Informe o PIB da Cidade: \n");
    scanf("%f", &pib_02);
    printf("Informe a Quantidade de pontos turisticos: \n");
    scanf("%d", &num_p_turist_02);
    printf("\n-----------------------------------------------------\n");

    // Exibição das Cartas
    printf("Carta 01:\n");
    printf(" Estado: %s\n", estado_01);
    printf(" Codigo: %s\n", codigo_01);
    printf(" Nome da Cidade: %s\n", nome_cd1);
    printf(" Populacao: %d\n", pop_01);
    printf(" Area: %.2f km²\n", area_01);
    printf(" PIB: R$ %.2f bilhões\n", pib_01);
    printf(" Numero de Pontos Turisticos: %d\n", num_p_turist_01);

    printf("\n-----------------------------------------------------\n");

    printf("Carta 02:\n");
    printf(" Estado: %s\n", estado_02);
    printf(" Codigo: %s\n", codigo_02);
    printf(" Nome da Cidade: %s\n", nome_cd2);
    printf(" Populacao: %d\n", pop_02);
    printf(" Area: %.2f km²\n", area_02);
    printf(" PIB: R$ %.2f bilhões\n", pib_02);
    printf(" Numero de Pontos Turisticos: %d\n", num_p_turist_02);

    printf("\n------------------------x----------------------------\n");

    return 0;
}
