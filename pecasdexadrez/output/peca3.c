#include <stdio.h>

// Funções recursivas
void moverTorre(int torre) {
    if(torre <= 0) return;
    printf("Direita\n");
    moverTorre(torre - 1);
}

void moverBispo(int bispo) {
    if(bispo <= 0) return;
    printf("Cima, Direita\n");
    moverBispo(bispo - 1);
}

void moverRainha(int rainha) {
    if(rainha <= 0) return;
    printf("Esquerda\n");
    moverRainha(rainha - 1);
}

// Cavalo em L: 2 para cima e 1 para direita
void moverCavalo(int cavalo) {
    int i = 0, passoCavalo;
    while(i < cavalo) {
        passoCavalo = 0;
        while(passoCavalo < 2) {  // 2 casas para cima
            printf("Cima\n");
            passoCavalo++;
        }
        printf("Direita\n");       // 1 casa para direita
        i++;
    }
}

int main() {
    // Número de movimentos de cada peça
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int cavalo = 1; // número de movimentos em L

    printf("Movimento da Torre:\n");
    moverTorre(torre);

    printf("\nMovimento do Bispo:\n");
    moverBispo(bispo);

    printf("\nMovimento da Rainha:\n");
    moverRainha(rainha);

    printf("\nMovimento do Cavalo:\n");
    moverCavalo(cavalo);

    return 0;
}
