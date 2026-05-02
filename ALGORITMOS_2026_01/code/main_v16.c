#include <stdio.h>
#include <math.h>
int main() {
	int a, b, c;
	// Arredonda para cima.
	a = ceil(4.5);
	// Arredonda para baixo.
	b = floor(4.5);
	// Arredondamento tradicional.
	c = round(4.5);
	printf("O valor de <a> e: %d \n", a);
	printf("O valor de <b> e: %d \n", b);
	printf("O valor de <c> e: %d \n", c);
	return 0;
}
