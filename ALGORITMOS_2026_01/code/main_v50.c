#include <stdio.h>
void imprimirMatriz(int *matriz, int linhas, int colunas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i * colunas + j]);
        }
        printf("\n");
    }
}
int main() {
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    imprimirMatriz(&mat[0][0], 2, 3);
    return 0;
}
