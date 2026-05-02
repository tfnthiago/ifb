#include <stdio.h>

int main() {
	int nota;
	float soma = 0.0;
	for (int i=0; i < 3; i++) {
	    printf("Informa a Nota %d: ", i);
	    scanf("%d", &nota);
	    soma += nota;
	}
	printf("\nA nota média é %.2f", soma/3);
	return 0;
}
