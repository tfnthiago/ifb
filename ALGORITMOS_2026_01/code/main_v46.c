#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[50]; int idade; float media;
} Aluno;
int main() {
    FILE *arquivo;
    Aluno aluno, alunoLido;
    strcpy(aluno.nome, "Ana Souza");
    aluno.idade = 20;
    aluno.media = 8.5;
    arquivo = fopen("aluno.bin", "wb"); // Gravando a struct no arquivo
    if (arquivo == NULL) return 1;
    fwrite(&aluno, sizeof(Aluno), 1, arquivo);
    fclose(arquivo);
    arquivo = fopen("aluno.bin", "rb");     // Lendo a struct do arquivo
    if (arquivo == NULL) return 1;
    fread(&alunoLido, sizeof(Aluno), 1, arquivo);
    fclose(arquivo);
    printf("Nome: %s\nIdade: %d\nMedia: %.2f\n", alunoLido.nome, alunoLido.idade, alunoLido.media);
    return 0;
}
