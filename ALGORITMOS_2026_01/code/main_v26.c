#include <stdio.h>
int potencia(int a, int b) {
    int resultado = a;
    for (int i = 1; i < b; i++) {
        resultado *= a;
    }
    return resultado;
}
int main() {
    int a = 1, b = 8;
    printf("<%d> elevado a potencia <%d> e: %d", a, b, potencia(a, b));
    return 0;
}
