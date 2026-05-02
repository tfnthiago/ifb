#include <stdio.h>
#include <stdlib.h>
int main() {
    FILE *f;
    char nome[50];
    int idade;
    f = fopen("dados.txt", "r");
    if (f == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    while (fscanf(f, "%49s %d", nome, &idade) == 2) {
        printf("Nome: %s | Idade: %d\n", nome, idade);
    }
    fclose(f);
    return 0;
}
