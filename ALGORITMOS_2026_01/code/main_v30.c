#include <stdio.h>
int contador = 0;	// Variável global
void incrementar() {
	contador++;
}
void mostrar() {
	printf("Valor do contador: %d\n", contador);
}
int main() {
	mostrar();
	incrementar();
	incrementar();
	mostrar();
	return 0;
}
