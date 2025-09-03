#include <stdio.h>

#define TAM 10  // Tamanho do tabuleiro

int main() {
    int mar[TAM][TAM] = {0};  // Nosso tabuleiro (mar)
    
    // Configuração dos navios
    int col_vert = 2, linha_vert = 3;  // Navio vertical começa aqui
    int col_horiz = 5, linha_horiz = 1; // Navio horizontal começa aqui
    
    // Posicionando o navio vertical (3 posições)
    for (int i = 0; i < 3; i++) {
        mar[linha_vert + i][col_vert] = 1;
    }
    
    // Posicionando o navio horizontal (4 posições)
    for (int i = 0; i < 4; i++) {
        mar[linha_horiz][col_horiz + i] = 1;
    }
    
    // Mostra onde estão os navios
    printf("Navios posicionados:\n");
    
    // Coordenadas do vertical
    printf("Navio vertical (tamanho 3):\n");
    for (int i = 0; i < 3; i++) {
        printf("(%d, %d) ", col_vert, linha_vert + i);
    }
    printf("\n\n");
    
    // Coordenadas do horizontal
    printf("Navio horizontal (tamanho 4):\n");
    for (int i = 0; i < 4; i++) {
        printf("(%d, %d) ", col_horiz + i, linha_horiz);
    }
    printf("\n\n");
    
    // Mostra o tabuleiro completo
    printf("Visualizacao do tabuleiro:\n");
    printf("   ");
    for (int i = 0; i < TAM; i++) {
        printf("%d ", i);  // Índices das colunas
    }
    printf("\n");
    
    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i);  // Índices das linhas
        for (int j = 0; j < TAM; j++) {
            printf("%d ", mar[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
