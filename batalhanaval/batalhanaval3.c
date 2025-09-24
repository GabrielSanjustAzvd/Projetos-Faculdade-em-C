#include <stdio.h>
#include <stdlib.h> // para abs()

int main() {
    int tabuleiro[10][10] = {0};
    int linha, coluna;
    char letraColuna, orientacao;

    // Exibe tabuleiro vazio
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
        int l = linha - 1 + (orientacao == 'V' || orientacao == 'v' ? i : 0);
        int c = coluna + (orientacao == 'H' || orientacao == 'h' ? i : 0);
        if (l < 10 && c < 10)
            tabuleiro[l][c] = 3;
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

    // MATRIZES DE HABILIDADE (5x5)
    int cone[5][5] = {0}, cruz[5][5] = {0}, octaedro[5][5] = {0};

    // Cone: forma triangular apontando para baixo
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (j >= 2 - i && j <= 2 + i)
                cone[i][j] = 1;

    // Cruz: linha e coluna centrais
    for (int i = 0; i < 5; i++) {
        cruz[2][i] = 1;
        cruz[i][2] = 1;
    }

    // Octaedro: formato de losango
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++)
            if (abs(i - 2) + abs(j - 2) <= 2)
                octaedro[i][j] = 1;

    // Função para aplicar matriz de habilidade no tabuleiro
    void aplicar(int matriz[5][5], int origemLinha, int origemColuna) {
        for (int i = 0; i < 5; i++) {
            for (int j = 0; j < 5; j++) {
                int l = origemLinha - 2 + i;
                int c = origemColuna - 2 + j;
                if (l >= 0 && l < 10 && c >= 0 && c < 10 && matriz[i][j] == 1 && tabuleiro[l][c] == 0)
                    tabuleiro[l][c] = 5;
            }
        }
    }

    // Aplica habilidades em posições fixas
    aplicar(cone, 1, 4);      // Cone no topo
    aplicar(cruz, 5, 5);      // Cruz no centro
    aplicar(octaedro, 8, 8);  // Octaedro no canto inferior

    // Imprime o tabuleiro
    printf("\n   A B C D E F G H I J\n");
    for (int i = 0; i < 10; i++) {
        printf("%2d ", i + 1);
        for (int j = 0; j < 10; j++) {
            if (tabuleiro[i][j] == 0)
                printf("~ "); //água (0)
            else if (tabuleiro[i][j] == 3)
                printf("N "); //Navio(3)
            else if (tabuleiro[i][j] == 5)
                printf("* "); //Dano causado por habilidade (5)
        }
        printf("\n");
    }

    return 0;
}
