#include <stdio.h>

int main() {
    char cidade1[50], cidade2[50];
    long populacao1, populacao2;
    float area1, area2, pib1, pib2, dens1, dens2, perCapita1, perCapita2, super1, super2;
    int pontos1, pontos2, opcao;

    // Entrada Carta 1
    printf("Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%ld", &populacao1);
    printf("Area: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos1);

    dens1 = populacao1 / area1;
    perCapita1 = (pib1 * 1000000000) / populacao1;
    super1 = populacao1 + area1 + pib1 + pontos1 + perCapita1 + (1 / dens1);

    // Entrada Carta 2
    printf("\nCidade 2: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%ld", &populacao2);
    printf("Area: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontos2);

    dens2 = populacao2 / area2;
    perCapita2 = (pib2 * 1000000000) / populacao2;
    super2 = populacao2 + area2 + pib2 + pontos2 + perCapita2 + (1 / dens2);

    // Menu simples
    printf("\nEscolha o atributo para comparar:\n");
    printf("1-Populacao 2-Area 3-PIB 4-Pontos 5-Densidade 6-PIB per Capita 7-Super Poder\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\nResultado:\n");

    switch(opcao) {
        case 1:
            printf("Comparando Populacao: %s (%ld) x %s (%ld)\n", cidade1, populacao1, cidade2, populacao2);
            if (populacao1 > populacao2) printf("Vencedor: %s\n", cidade1);
            else if (populacao2 > populacao1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 2:
            printf("Comparando Area: %s (%.2f) x %s (%.2f)\n", cidade1, area1, cidade2, area2);
            if (area1 > area2) printf("Vencedor: %s\n", cidade1);
            else if (area2 > area1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 3:
            printf("Comparando PIB: %s (%.2f) x %s (%.2f)\n", cidade1, pib1, cidade2, pib2);
            if (pib1 > pib2) printf("Vencedor: %s\n", cidade1);
            else if (pib2 > pib1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 4:
            printf("Comparando Pontos: %s (%d) x %s (%d)\n", cidade1, pontos1, cidade2, pontos2);
            if (pontos1 > pontos2) printf("Vencedor: %s\n", cidade1);
            else if (pontos2 > pontos1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 5:
            printf("Comparando Densidade: %s (%.2f) x %s (%.2f)\n", cidade1, dens1, cidade2, dens2);
            if (dens1 < dens2) printf("Vencedor: %s\n", cidade1); // menor vence
            else if (dens2 < dens1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 6:
            printf("Comparando PIB per Capita: %s (%.2f) x %s (%.2f)\n", cidade1, perCapita1, cidade2, perCapita2);
            if (perCapita1 > perCapita2) printf("Vencedor: %s\n", cidade1);
            else if (perCapita2 > perCapita1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        case 7:
            printf("Comparando Super Poder: %s (%.2f) x %s (%.2f)\n", cidade1, super1, cidade2, super2);
            if (super1 > super2) printf("Vencedor: %s\n", cidade1);
            else if (super2 > super1) printf("Vencedor: %s\n", cidade2);
            else printf("Empate!\n");
            break;
        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
