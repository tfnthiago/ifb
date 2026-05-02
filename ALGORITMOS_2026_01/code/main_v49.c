#include <stdio.h>
void imprimirMatriz(int matriz[][3], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}
int main() {
    int mat[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    imprimirMatriz(mat, 2);
    return 0;
}
