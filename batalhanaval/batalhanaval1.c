#include <stdio.h>

int main() {
    int i, j;
    int tabuleiro[10][10]; // matriz do tabuleiro
   

    // Inicializa o tabuleiro com 0 (água)
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Mostra tabuleiro vazio
    printf("\nTABULEIRO BATALHA NAVAL\n");
    printf("   A B C D E F G H I J\n");
    for (i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

 

    return 0;
}
