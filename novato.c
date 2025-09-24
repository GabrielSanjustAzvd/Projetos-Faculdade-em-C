#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char estado1, codigo1[4], cidade1[50];
    long int populacao1;
    float area1, pib1;
    int pontosTuristicos1;
    float densidade1, pibPerCapita1, superPoder1;

    // Variáveis Carta 2
    char estado2, codigo2[4], cidade2[50];
    long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, pibPerCapita2, superPoder2;

    // Entrada Carta 1
    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo (ex: A01): ");
    scanf("%s", codigo1);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km²): \n ");
    scanf("%f", &area1);
    printf("PIB (bilhoes): \n ");
    scanf("%f", &pib1);
    printf("Pontos Turisticos: \n ");
    scanf("%d", &pontosTuristicos1);

    // Calculos Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);

    // Entrada Carta 2
    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo (ex: B02): ");
    scanf("%s", codigo2);
    printf("Cidade: ");
    scanf(" %[^\n]", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km²): ");
    scanf("%f", &area2);
    printf("PIB (bilhoes): ");
    scanf("%f", &pib2);
    printf("Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // Calculos Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);

   

// Comparacao
printf("\n=== Comparacao ===\n");

if (populacao1 > populacao2) {
    printf("Populacao: Carta 1 venceu\n");
} else {
    printf("Populacao: Carta 2 venceu\n");
}

if (area1 > area2) {
    printf("Area: Carta 1 venceu\n");
} else {
    printf("Area: Carta 2 venceu\n");
}

if (pib1 > pib2) {
    printf("PIB: Carta 1 venceu\n");
} else {
    printf("PIB: Carta 2 venceu\n");
}

if (pontosTuristicos1 > pontosTuristicos2) {
    printf("Pontos Turisticos: Carta 1 venceu\n");
} else {
    printf("Pontos Turisticos: Carta 2 venceu\n");
}

// aqui o menor valor vence
if (densidade1 < densidade2) {
    printf("Densidade: Carta 1 venceu\n");
} else {
    printf("Densidade: Carta 2 venceu\n");
}

if (pibPerCapita1 > pibPerCapita2) {
    printf("PIB per Capita: Carta 1 venceu\n");
} else {
    printf("PIB per Capita: Carta 2 venceu\n");
}

if (superPoder1 > superPoder2) {
    printf("Super Poder: Carta 1 venceu\n");
} else {
    printf("Super Poder: Carta 2 venceu\n");
}


    return 0;
}

