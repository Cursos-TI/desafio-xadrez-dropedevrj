#include <stdio.h>

// FUNÇÃO RECURSIVA - TORRE (Direita)
void moverTorre(int casas) {
    if (casas == 0) {
        return; // Caso base da recursão
    }

    printf("Direita\n");
    moverTorre(casas - 1); // Chamada recursiva
}

// FUNÇÃO RECURSIVA - RAINHA (Esquerda)
void moverRainha(int casas) {
    if (casas == 0) {
        return; // Caso base
    }

    printf("Esquerda\n");
    moverRainha(casas - 1); // Recursão
}

// FUNÇÃO RECURSIVA + LOOPS ANINHADOS - BISPO (Diagonal Cima Direita)
void moverBispo(int casas) {
    if (casas == 0) {
        return; // Caso base da recursão
    }

    // Loop externo (movimento vertical)
    for (int vertical = 0; vertical < 1; vertical++) {

        // Loop interno (movimento horizontal)
        for (int horizontal = 0; horizontal < 1; horizontal++) {
            printf("Cima Direita\n");
        }
    }

    moverBispo(casas - 1); // Recursividade
}

int main() {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // ================= TORRE =================
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    // ================= BISPO =================
    printf("Movimento do Bispo:\n");
    moverBispo(casasBispo);

    printf("\n");

    // ================= RAINHA =================
    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    // ================= CAVALO (LOOPS COMPLEXOS) =================
    // Movimento em L: 2 casas para CIMA e 1 para DIREITA
    printf("Movimento do Cavalo:\n");

    // Loops aninhados com múltiplas variáveis e controle de fluxo
    for (int i = 0; i < 3; i++) {

        // Primeiras duas iterações: sobe
        if (i < 2) {
            printf("Cima\n");
            continue; // continua o loop até completar as duas casas para cima
        }

        // Terceira etapa: movimento horizontal
        if (i == 2) {
            printf("Direita\n");
            break; // finaliza após completar o "L"
        }
    }

    return 0;
}
