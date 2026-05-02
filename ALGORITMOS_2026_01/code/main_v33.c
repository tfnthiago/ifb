#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    f = fopen("saida.txt", "w");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    putc('O', f);
    putc('l', f);
    putc('a', f);
    putc('\n', f);
    fclose(f);
    return 0;
}
