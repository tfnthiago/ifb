#include <stdio.h>

int main() {
	int a = 5, b = 2;
	float f1, f2;
	f1 = a/b;
	f2 = (float) a/b;
	
	printf("O valor de <f1> e: %.1f \n", f1);
	printf("O valor de <f2> e: %.1f \n", f2);
	return 0;
}
