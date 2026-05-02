#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    char linha[100];
    f = fopen("dados.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (fgets(linha, sizeof(linha), f) != NULL) {
        printf("%s", linha);
    }
    fclose(f);
    return 0;
}
