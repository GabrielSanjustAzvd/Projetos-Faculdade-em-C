#include <stdio.h>

int main() {
    int i = 0;
    int torre = 5;
    int bispo = 5;
    int rainha = 8;

    // Movimentação da Torre: 5 casas para a direita (usando for)
    printf("Movimento da Torre:\n");
    for(i = 1; i <= torre; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo: 5 casas diagonal para cima e direita (usando while)
    printf("\nMovimento do Bispo:\n");
    i = 1;
    while(i <= bispo) {
        printf("Cima, Direita\n");
        i++;
    }

    // Movimentação da Rainha: 8 casas para a esquerda (usando do-while)
    printf("\nMovimento da Rainha:\n");
    i = 1;
    do {
        printf("Esquerda\n");
        i++;
    } while(i <= rainha);

    return 0;
}
