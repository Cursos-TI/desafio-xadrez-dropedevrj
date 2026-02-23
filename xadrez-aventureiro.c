#include <stdio.h>

int main() {

    // TORRE - 5 casas para a direita (FOR)
    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // BISPO - 5 casas na diagonal (WHILE)
    printf("Movimento do Bispo:\n");
    int j = 0;
    while (j < 5) {
        printf("Cima, Direita\n");
        j++;
    }

    printf("\n");

    // RAINHA - 8 casas para a esquerda (DO-WHILE)
    printf("Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < 8);

    printf("\n");

    // CAVALO - Movimento em "L" (2 para baixo e 1 para a esquerda)
    // Usando loops aninhados (FOR + WHILE)
    printf("Movimento do Cavalo:\n");

    // Primeiro loop (FOR) - controla o movimento vertical (2 casas para baixo)
    for (int i = 0; i < 1; i++) {

        int passosBaixo = 0;

        // Segundo loop (WHILE) - duas casas para baixo
        while (passosBaixo < 2) {
            printf("Baixo\n");
            passosBaixo++;
        }

        // Depois da vertical, 1 casa para a esquerda (forma o "L")
        printf("Esquerda\n");
    }

    return 0;
}
