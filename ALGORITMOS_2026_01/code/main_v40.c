#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt", "r");
    long tamanho;
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    fseek(f, 0, SEEK_END);
    tamanho = ftell(f);	// informa a posição atual. Essa posição corresponde ao tamanho do arquivo em bytes.
    printf("Tamanho do arquivo: %ld bytes\n", tamanho);
    fclose(f);
    return 0;
}
