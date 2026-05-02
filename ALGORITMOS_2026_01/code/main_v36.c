#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *arquivo;
    int c;
    arquivo = fopen("dados.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while ((c = getc(arquivo)) != EOF) {
        putchar(c);
    }
    if (feof(arquivo)) {
        printf("\nFim do arquivo alcançado.\n");
    }
    fclose(arquivo);
    return 0;
}
