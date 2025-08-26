#include <stdio.h>

// Desafio Super Trunfo - Países
// Nivel Aventureiro

int main() {
    // Variáveis para Carta 01
    char estado_01[2]; 
    char codigo_01[10];
    char nome_cd1[50];
    int pop_01;
    float area_01, pib_01;
    int num_p_turist_01;
    float densi_pop01;
    float pib_cap01;

    // Variáveis para Carta 02
    char estado_02[2];
    char codigo_02[10];
    char nome_cd2[50];
    int pop_02;
    float area_02, pib_02;
    int num_p_turist_02;
    float densi_pop02;
    float pib_cap02;

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
    printf("Informe a Area da Cidade (km): \n");
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
    printf("Informe a Area da Cidade (km): \n");
    scanf("%f", &area_02);
    printf("Informe o PIB da Cidade: \n");
    scanf("%f", &pib_02);
    printf("Informe a Quantidade de pontos turisticos: \n");
    scanf("%d", &num_p_turist_02);
    printf("\n-----------------------------------------------------\n");

    // Calculo da Densidade e do PIB per Capita
    densi_pop01 = (float) pop_01 / area_01;
    pib_cap01 = (pib_01 * 1000000000.0) / pop_01;

    densi_pop02 = (float) pop_02 / area_02;
    pib_cap02 = (pib_02 * 1000000000.0) / pop_02;


    // Exibição das Cartas
    printf("Carta 01:\n");
    printf(" Estado: %s\n", estado_01);
    printf(" Codigo: %s\n", codigo_01);
    printf(" Nome da Cidade: %s\n", nome_cd1);
    printf(" Populacao: %d\n", pop_01);
    printf(" Area: %.2f km\n", area_01);
    printf(" PIB: R$ %.2f bilhoes\n", pib_01);
    printf(" Numero de Pontos Turisticos: %d\n", num_p_turist_01);
    printf(" Densidade Populacional: %.2f\n", densi_pop01);
    printf(" PIB per Capita: %.2f Reais\n", pib_cap01);

    printf("\n-----------------------------------------------------\n");

    printf("Carta 02:\n");
    printf(" Estado: %s\n", estado_02);
    printf(" Codigo: %s\n", codigo_02);
    printf(" Nome da Cidade: %s\n", nome_cd2);
    printf(" Populacao: %d\n", pop_02);
    printf(" Area: %.2f km\n", area_02);
    printf(" PIB: R$ %.2f bilhoes\n", pib_02);
    printf(" Numero de Pontos Turisticos: %d\n", num_p_turist_02);
    printf(" Densidade Populacional: %.2f\n", densi_pop02);
    printf(" PIB per Capita: %.2f Reais\n", pib_cap02);

    printf("\n------------------------x----------------------------\n");

    getchar(); 
    getchar(); 

    return 0;
}
