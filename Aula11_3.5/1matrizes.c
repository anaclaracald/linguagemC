#include <stdio.h>

int main(){
    // criando uma matriz com 3 linhas e 3 colunas
    int mat[3][3];

    //linha 0 e percorrendo cada coluna e inserindo o valor 
    mat[0][0] = 1;
    mat[0][1] = 2;
    mat[0][2] = 3;

    mat[1][0] = 4;
    mat[1][1] = 5;
    mat[1][2] = 6;

    mat[2][0] = 7;
    mat[2][1] = 8;
    mat[2][2] = 9;

    printf("Primeira linha: %d|%d|%d\n",mat[0][0], mat[0][1],mat[0][2]);
    printf("Segunda linha: %d|%d|%d\n",mat[1][0], mat[1][1],mat[1][2]);
    printf("Terceira linha: %d|%d|%d\n",mat[2][0], mat[2][1],mat[2][2]);

    return 0;
}