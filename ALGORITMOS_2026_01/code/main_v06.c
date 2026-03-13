#include <stdio.h>

int main() {
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if (x >= 10) {
		 printf("Numero maior ou igual a 10. \n");
	} else {
		 printf("Numero menor que 10! \n");
	}
}