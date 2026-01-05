
#include <stdio.h>

// Desafio Super Trunfo -
// Tema 1 - Cadastro das cartas
// Tema 2 - Comparação de cartas

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
    float area1, densidade1;
    float pib1, pop1;

    // Carta 2
    char Estado2[3];
    char codigo2[4];
    char cidade2[30];
    int populacao2;
    int pontos2;
    float area2, densidade2;
    float pib2, pop2;

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

    // Cálculos
    densidade1 = (float) populacao1 / area1;
    pop1 = pib1 / (float) populacao1;

    // Exibição Carta 1
    printf("\n--- Dados da Carta 1 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
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

    // Cálculos
    densidade2 = (float) populacao2 / area2;
    pop2 = pib2 / (float) populacao2;

    // Exibição Carta 2
    printf("\n--- Dados da Carta 2 ---\n");
    printf("Estado: %s\n", Estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pop2);

    // ===============================
    // Comparação das cartas
    // ===============================

    int opcao;

    printf("\n--- Comparação das Cartas ---\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch (opcao) {

        case 1:
            printf("\nAtributo: População\n");
            printf("%s: %d\n", cidade1, populacao1);
            printf("%s: %d\n", cidade2, populacao2);

            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 2:
            printf("\nAtributo: Área\n");
            printf("%s: %.2f km²\n", cidade1, area1);
            printf("%s: %.2f km²\n", cidade2, area2);

            if (area1 > area2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 3:
            printf("\nAtributo: PIB\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n", cidade2, pib2);

            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 4:
            printf("\nAtributo: Pontos Turísticos\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n", cidade2, pontos2);

            if (pontos1 > pontos2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (pontos2 > pontos1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        case 5:
            printf("\nAtributo: Densidade Demográfica\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n", cidade2, densidade2);

            if (densidade1 < densidade2)
                printf("Resultado: %s venceu!\n", cidade1);
            else if (densidade2 < densidade1)
                printf("Resultado: %s venceu!\n", cidade2);
            else
                printf("Empate!\n");
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}
