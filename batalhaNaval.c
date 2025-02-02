#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
  #include <stdio.h>

    // Nível Novato - Posicionamento dos Navios
    
    // Definição do tabuleiro 5x5
    int tabuleiro[5][5] = {0};
    
    // Posicionamento do navio horizontalmente na linha 1
    int linha_horizontal = 1, coluna_inicio = 1;
    for (int i = 0; i < 3; i++) { // Navio de tamanho 3
        tabuleiro[linha_horizontal][coluna_inicio + i] = 1;
    }
    
    // Posicionamento do navio verticalmente na coluna 3
    int coluna_vertical = 3, linha_inicio = 2;
    for (int i = 0; i < 3; i++) { // Navio de tamanho 3
        tabuleiro[linha_inicio + i][coluna_vertical] = 2;
    }
    
    // Exibição das coordenadas dos navios
    printf("Coordenadas do navio horizontal:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", linha_horizontal, coluna_inicio + i);
    }
    
    printf("\nCoordenadas do navio vertical:\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d)\n", linha_inicio + i, coluna_vertical);
    }
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
