#include <stdio.h>

void imprimir(char nome[20]) {
    printf(nome);
}

int main() {
    char frase1[] = "O rato roeu a roupa do rei de roma!\n";
    char frase2[] = "Quem tem boca, vai a roma!\n";
    imprimir(frase1);
    imprimir(frase2);
    return 0;
}
