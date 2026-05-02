#include <stdio.h>
int main() {
    FILE *arquivo;
    int numero = 100;
    int numeroLido;
    arquivo = fopen("dados.bin", "wb");   // Gravando o número no arquivo
    if (arquivo == NULL) return 1;
    fwrite(&numero, sizeof(int), 1, arquivo);
    fclose(arquivo);

    arquivo = fopen("dados.bin", "rb"); // Lendo o número do arquivo
    if (arquivo == NULL) return 1;
    fread(&numeroLido, sizeof(int), 1, arquivo);
    fclose(arquivo);
    printf("Numero lido do arquivo: %d\n", numeroLido);
    return 0;
}
