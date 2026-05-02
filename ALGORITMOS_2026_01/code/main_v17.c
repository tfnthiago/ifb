#include <stdio.h>
#include <stdlib.h>

int main() {
	int a, b, c;
	// Gera um numero randomico de 0-100
	a = rand() % 100;
	b = rand() % 100;
	c = rand() % 100;
	
	printf("O valor de <a> e: %d \n", a);
	printf("O valor de <b> e: %d \n", b);
	printf("O valor de <c> e: %d \n", c);
	return 0;
}
