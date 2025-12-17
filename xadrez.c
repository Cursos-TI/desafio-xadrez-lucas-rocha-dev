#include <stdio.h>

// Desafio de Xadrez - MateCheck 
// NIVEL MESTRE

void movimentacao_bispo(int moves) {
    if (moves > 0) {

    // Loop externo para movimento vertical (Cima)
    for (int v = 0; v < 1; v++) {
        printf("Cima, ");
        // Loop interno para movimento horizontal (Direita)
        for (int h = 0; h < 1; h++) {
            printf("Direita\n");
        }
    
    }
    
    movimentacao_bispo(moves - 1);
    }
}


void movimentacao_torre(int moves) {
    if (moves > 0) {
        printf("Direita\n");
        movimentacao_torre(moves - 1);
    }
}

void movimentacao_rainha(int moves) {
    if (moves > 0) {
        printf("Esquerda\n");
        movimentacao_rainha(moves - 1);
    }
}


int main() {
    // Variáveis para controle de movimentos
    int bispo_moves = 5;
    int rainha_moves = 8;
    int torre_moves = 7;


    // Movimentação do Bispo
    printf("Movimentação do Bispo:\n");
    movimentacao_bispo(bispo_moves);
    printf("\n");

    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    movimentacao_torre(torre_moves);
    printf("\n");

    // Movimentação da Rainha
    printf("Movimentação da Rainha:\n");
    movimentacao_rainha(rainha_moves);
    printf("\n");

    // Movimentação do Cavalo
    printf("Movimentação do Cavalo:\n");
    // Loops Complexos para o Cavalo: 2 para Cima, 1 para Direita
    // Usando múltiplas variáveis e condições
    for (int i = 1, j = 1; i <= 2; i++) {
        while (j == 1) {
            // O cavalo se move 2 casas para cima primeiro
            printf("Cima\n");
            if (i < 2) {
                break; // Sai do loop interno até completar as 2 casas
            }

            // Após as 2 para cima, executa a casa para a direita
            printf("Direita\n");
            j++; 
        }
    }


    return 0;
}
