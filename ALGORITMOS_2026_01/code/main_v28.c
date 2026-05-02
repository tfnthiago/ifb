#include <stdio.h>
void play(int nro) {
    nro += 1;
    printf("play: %d\n", nro);
}
int main() {
    int nro = 10;
    printf("main: %d\n", nro);
    nro += 1;
    printf("main: %d\n", nro);
    nro += 1;
    printf("main: %d\n", nro);
    nro += 1;
    play(nro);
    printf("main: %d\n", nro);
    return 0;
}
