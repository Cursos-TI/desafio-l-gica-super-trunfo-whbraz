#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: criar cartas representando cidades, utilizando scanf para
// entrada de dados e printf para exibição das informações.

int main() {

    // ===============================
    // Declaração das variáveis
    // ===============================

    // Carta 1
    char Estado1[3];
    char codigo1[4];
    char cidade1[30];
    int populacao1;
    int pontos1;
    float area1,densidade1;
    float pib1,pop1;

    // Carta 2
    char Estado2[3];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    int pontos2;
    float area2,densidade2;
    float pib2,pop2;

    // ===============================
    // Entrada de dados - Carta 1
    // ===============================

    printf("Carta 1\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado1);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade1);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos1);

    // Processamento dos dados (Cálculos)
    densidade1 = (float)populacao1 / area1;
    pop1 = pib1 / (float)populacao1;



    // ===============================
    // Exibição dos dados da Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pop1);

    // ===============================
    // Entrada de dados - Carta 2
    // ===============================

    printf("\nCarta 2\n");

    printf("Digite o estado:\n");
    scanf("%s", Estado2);

    printf("Digite o codigo da carta (ex: A01):\n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade:\n");
    scanf("%s", cidade2);

    printf("Digite a populacao da cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade:\n");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos:\n");
    scanf("%d", &pontos2);

    // Processamento dos dados (Cálculos)
    densidade2 = (float)populacao2 / area2;
    pop2 = pib2 / (float)populacao2;


    
    // Exibição dos dados da Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pop2);


    // ===============================
    // Comparação das cartas
    // ===============================
    printf("\n--- Comparação das Cartas ---\n");
    printf("Carta 1 - %s (%s): %d habitantes \n", cidade1, codigo1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes \n", cidade2, codigo2, populacao2);
    if(populacao1 > populacao2) {
    printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("Empate! Ambas as cidades possuem %d habitantes!\n", populacao1);
    }


    return 0;
}
