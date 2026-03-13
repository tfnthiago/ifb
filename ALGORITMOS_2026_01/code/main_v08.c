#include <stdio.h>

int main() {
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);
	if (x >= 100) {
		 printf("Numero maior ou igual a 100! \n");
	} else {
	    if (x >= 50) {
		    printf("Numero maior ou igual que 50 e menor que 100! \n");
	    } else {
		    printf("Numero menor que 50! \n");	
	    }	    
	}
}