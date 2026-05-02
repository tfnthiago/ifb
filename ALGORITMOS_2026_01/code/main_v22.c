#include <stdio.h>
#include <string.h>

int main() {
	char frase[30] = "O homem e o lobo do homem";
	for (int i=0; i < strlen(frase); i++) {
	    printf("%c ", frase[i]);
	}
	return 0;
}
