#include <stdio.h>
#include <string.h>

int main() {
	char nome[30];
	printf("Digite o seu nome: ");
    // Le 30 caracteres da entrada padrao: teclado.
	fgets(nome,30, stdin);
    // strcspn procura o caractere "\n" e retorna o indice.
	nome[strcspn(nome, "\n")] = '\0';
	printf("\nNome informado: <%s>", nome);
	return 0;
}
