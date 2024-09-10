#include <stdio.h>

int main (void) {
    int valor = 0;

    valor++;
    printf("++ %d\n", valor);
    valor--;
    printf("-- %d\n", valor);
    valor-= 4;
    printf("-= %d\n", valor);
    valor+= 4;
    printf("+= %d\n", valor);
    valor*= 4;
    printf("*= %d\n", valor);
    valor/= 4;
    printf("/= %d\n", valor);
}