#include <stdio.h>

int main() {
    char nomed[40];
    sprintf(nomed, "Algoritmos e Programacao de Computadores");
    printf("%s \n", nomed);
    // Para encerrar a string, adicionar o '\0' 
    nomed[30] = '\0';
    printf("%s \n", nomed);
    return 0;
}
