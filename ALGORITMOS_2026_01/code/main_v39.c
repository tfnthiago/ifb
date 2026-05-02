#include <stdio.h>
int main() {
    FILE *f = fopen("dados.txt", "r");
    char c;
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fgetc(f); // A
    fgetc(f); // B
    fgetc(f); // C
    fseek(f, -1, SEEK_CUR);	// volta 1 byte.
    c = fgetc(f);
    printf("Caractere lido: %c\n", c);
    fclose(f);
    return 0;
}
