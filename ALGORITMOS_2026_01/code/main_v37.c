#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fseek(f, 0, SEEK_SET);		// leva o cursor para o byte 0, ou seja, para o começo do arquivo.
    printf("Cursor movido para o início do arquivo.\n");

    fclose(f);
    return 0;
}
