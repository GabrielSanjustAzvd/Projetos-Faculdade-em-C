#include <stdio.h>

int main() {
    int tabuleiro[10][10] = {0};
    int linha, coluna;
    char letraColuna, orientacao;

    printf("\n   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
    
    // Entrada do jogador
    printf("Linha inicial (1 a 10): ");
    scanf("%d", &linha);

    printf("Coluna inicial (A a J): ");
    scanf(" %c", &letraColuna);
    coluna = letraColuna - 'A';  //Transforma os parametros igualando numeros e letras 

    printf("Orientação (H ou V): "); //Horizontal ou Vertical
    scanf(" %c", &orientacao);

    // Primeiro navio (do jogador)
    for (int i = 0; i < 3; i++) {
        if (orientacao == 'H' || orientacao == 'h') {
            if (coluna + i < 10)
                tabuleiro[linha - 1][coluna + i] = 3;
        } else if (orientacao == 'V' || orientacao == 'v') {
            if (linha - 1 + i < 10)
                tabuleiro[linha - 1 + i][coluna] = 3;
        }
    }

    // Segundo navio fixo horizontal
    for (int i = 0; i < 3; i++)
        tabuleiro[2][2 + i] = 3;

    // Terceiro navio diagonal principal
    for (int i = 0; i < 3; i++)
        tabuleiro[5 + i][5 + i] = 3;

    // Quarto navio diagonal invertida
    for (int i = 0; i < 3; i++)
        tabuleiro[7 - i][2 + i] = 3;

    // Imprime o tabuleiro
    printf("\n   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
