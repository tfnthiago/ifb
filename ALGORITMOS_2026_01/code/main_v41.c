#include <stdio.h>

int main() {
    FILE *f = fopen("dados.txt", "r+");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fseek(f, 2, SEEK_SET);		// o cursor vai para a posição 2.
    fputc('X', f);				// sobrescreve o caractere daquela posição.
    fclose(f);
    return 0;
}
