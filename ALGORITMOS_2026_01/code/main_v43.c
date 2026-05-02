#include <stdio.h>
#include <string.h>
struct Aluno {
    char nome[50];
    int idade;
    float nota;
};
int main() {
    struct Aluno aluno1;
    strcpy(aluno1.nome, "Ana");
    aluno1.idade = 20;
    aluno1.nota = 8.5;
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Nota: %.2f\n", aluno1.nota);
    return 0;
}
