#include <stdio.h>

#define LINHAS      3
#define COLUNAS     3

int main() {
    // Declara uma matriz.
    int matriz[LINHAS][COLUNAS] = {1, 2, 3 , 4, 5, 6, 7, 8, 9};
    
    // Imprime a matriz.
    for (int i=0; i < LINHAS; i++) {
        for (int j=0; j < COLUNAS; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
