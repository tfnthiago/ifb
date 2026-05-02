#include <stdio.h>
int count [10] = {1, 5, 11, 11, 0, 3, 5, 6, 8, 10};
int main() {
    int i,j;
    FILE *f;
    f = fopen("dados.txt", "w");
    for (i=0; i < 10; i++) {
        for (j = 0; j < count[i]; j++)
            fprintf(f,"*");

        fprintf(f,"\n");
   }
    fclose (f);
}
