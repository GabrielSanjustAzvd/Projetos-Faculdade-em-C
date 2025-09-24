#include <stdio.h>

int main() {
    // Variáveis Carta 1
    char cidade1[50];
    long int populacao1;
    float area1, pib1;
    int pontos1;
    float densidade1, perCapita1, superPoder1;

    // Variáveis Carta 2
    char cidade2[50];
    long int populacao2;
    float area2, pib2;
    int pontos2;
    float densidade2, perCapita2, superPoder2;

    int op1, op2;
    float valor1_c1, valor1_c2, valor2_c1, valor2_c2;
    float soma1, soma2;

    // Cadastro simplificado
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

    densidade1 = populacao1 / area1;
    perCapita1 = (pib1 * 1000000000) / populacao1;
    superPoder1 = populacao1 + area1 + pib1 + pontos1 + perCapita1 + (1 / densidade1);

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

    densidade2 = populacao2 / area2;
    perCapita2 = (pib2 * 1000000000) / populacao2;
    superPoder2 = populacao2 + area2 + pib2 + pontos2 + perCapita2 + (1 / densidade2);

    // Menu de atributos
    printf("\n=== Escolha 2 atributos diferentes ===\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos\n5 - Densidade\n6 - PIB per Capita\n7 - Super Poder\n");
    printf("Primeiro atributo: ");
    scanf("%d", &op1);
    printf("Segundo atributo: ");
    scanf("%d", &op2);

    // Atributo 1
    switch(op1) {
        case 1: valor1_c1 = populacao1; valor1_c2 = populacao2; break;
        case 2: valor1_c1 = area1; valor1_c2 = area2; break;
        case 3: valor1_c1 = pib1; valor1_c2 = pib2; break;
        case 4: valor1_c1 = pontos1; valor1_c2 = pontos2; break;
        case 5: valor1_c1 = -densidade1; valor1_c2 = -densidade2; break; // invertido
        case 6: valor1_c1 = perCapita1; valor1_c2 = perCapita2; break;
        case 7: valor1_c1 = superPoder1; valor1_c2 = superPoder2; break;
    }

    // Atributo 2
    switch(op2) {
        case 1: valor2_c1 = populacao1; valor2_c2 = populacao2; break;
        case 2: valor2_c1 = area1; valor2_c2 = area2; break;
        case 3: valor2_c1 = pib1; valor2_c2 = pib2; break;
        case 4: valor2_c1 = pontos1; valor2_c2 = pontos2; break;
        case 5: valor2_c1 = -densidade1; valor2_c2 = -densidade2; break; // invertido
        case 6: valor2_c1 = perCapita1; valor2_c2 = perCapita2; break;
        case 7: valor2_c1 = superPoder1; valor2_c2 = superPoder2; break;
    }

    // Soma
    soma1 = valor1_c1 + valor2_c1;
    soma2 = valor1_c2 + valor2_c2;

    printf("\n=== Resultado ===\n");
    printf("%s -> %.2f + %.2f = %.2f\n", cidade1, valor1_c1, valor2_c1, soma1);
    printf("%s -> %.2f + %.2f = %.2f\n", cidade2, valor1_c2, valor2_c2, soma2);

    if (soma1 > soma2)
        printf("Vencedor: %s\n", cidade1);
    else if (soma2 > soma1)
        printf("Vencedor: %s\n", cidade2);
    else
        printf("Empate!\n");

    return 0;
}
