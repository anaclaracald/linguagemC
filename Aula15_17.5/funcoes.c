#include <stdio.h>

int gVariavel = 2;

int main(){
    void numero(void); //funções void nao retornam nada

    numero();
    return 0;
}

void numero(void){
    static int n = 8;
    int n1 = 3;

    int multi = n*n1;

    printf("%d -> %d = %d", n, n1,multi);
}