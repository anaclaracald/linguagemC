// Exercício 1: Crie uma matriz 3x3 para armazenar números inteiros. Preencha
// a matriz com valores fornecidos pelo usuário e depois exiba a matriz na tela.

#include <stdio.h>

int main(){
    int mat[3][3], linha= 0, coluna= 0;

    for (linha=0; linha<3;linha++){
        for (coluna=0;coluna<3; coluna++){
            printf("Elemento da linha %d e coluna %d:", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
            printf("\n");
        }
    }

    for (linha= 0; linha<3; linha++){
        for (coluna= 0;coluna<3; coluna++){
            printf("| %d |", mat[linha][coluna]);
            if (coluna == 2){
                printf("\n");
            }
        }
    }

    return 0; 
}