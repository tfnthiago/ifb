#include <stdio.h>
#include <string.h>
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
int main() {
    struct Aluno aluno1, aluno2;
    memset(&aluno1, 0, sizeof(struct Aluno));
    memset(&aluno2, 0, sizeof(struct Aluno));
    strcpy(aluno1.nome, "Ana");
    aluno1.idade = 20;
    aluno1.nota = 8.5;
    memcpy(&aluno2, &aluno1, sizeof(struct Aluno) );
    printf("Nome: %s\n", aluno2.nome);
    printf("Idade: %d\n", aluno2.idade);
    printf("Nota: %.2f\n", aluno2.nota);
    return 0;
}
