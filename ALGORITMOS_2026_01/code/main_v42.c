#include <stdio.h>
#include "matematica.h"

int somar(int a, int b) {
    return a + b;
}
int subtrair(int a, int b) {
    return a - b;
}

int main() {
    int resultado = somar(10, 5);

    printf("Resultado: %d\n", resultado);

    return 0;
}
