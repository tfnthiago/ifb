#include <stdio.h>

int main() {
	int notas[3];
	// Observe que a primeira posição é 0.
	notas[0] = 7;
	notas[1] = 4;
	notas[2] = 8;
	
	float res = (notas[0] + notas[1]+ notas[2])/3;
	printf("A média de notas é: %.2f \n", res);
	return 0;
}
