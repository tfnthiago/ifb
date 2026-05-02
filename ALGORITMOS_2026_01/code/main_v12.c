#include <stdio.h>
#define MAX 10
#define CHAVE 4

int main() {
	for (int i = 0; i < MAX; i++) {
		if (i == CHAVE) continue;
printf("%d ", i);
	}	
}
