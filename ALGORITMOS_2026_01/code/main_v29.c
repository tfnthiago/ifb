#include <stdio.h>

int sqr(int x) {
	return x*x;
} 

int main() {
	int x=11;
	printf("%d %d \n", x, sqr(x));
	return 0;
}
