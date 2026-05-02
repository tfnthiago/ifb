#include <stdio.h>
int main() {
	int nivel;
	printf("Escreva o nivel do jogo: \n(1) Facil (2) Medio (3) Dificil\n"); scanf("%d", &nivel);
	switch (nivel) {
	    case 1:
	        printf("Nivel Facil escolhido");
	        break;
	    case 2:
	        printf("Nivel Medio escolhido");
	        break;
	    case 3:
	        printf("Nivel Dificil escolhido");
	        break;
	    default:
	        printf("Opcao invalida!");
	}
	return 0;
}
