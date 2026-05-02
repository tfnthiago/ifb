#include <stdio.h>

int main() {
    FILE *f;
    f = fopen("dados.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo!");
    }
    
    fclose(f);
    return 0;
}
