#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt", "r");
    char c;
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fseek(f, 3, SEEK_SET);		// posiciona no 4º caractere.
    c = fgetc(f);
    printf("Caractere lido: %c\n", c);
    fclose(f);
    return 0;
}
