// **Exercício 3:** Crie uma matriz 4x4 e preencha-a com números aleatórios. Em
// seguida, calcule e imprima a soma de cada linha e de cada coluna.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int mat[4][4], linha, coluna;

    //gerando elementos da matriz
    for (linha=0;linha<4;linha++){
        for(coluna=0;coluna<4;coluna++){
            mat[linha][coluna] = rand () % 50+1;
            printf("|  %d  |", mat[linha][coluna]);
            if (coluna == 3){printf("\n");}
        }
    }

    printf("\n");

    //soma linha
    for(linha=0;linha<4;linha++){
        int somaLinha = 0;
        for (coluna=0;coluna<4;coluna++){
            somaLinha += mat[linha][coluna];
        }
        printf("Soma da linha %d -> %d\n", linha+1, somaLinha);
    }

    printf("\n");

    //somar colunas 
    for (coluna=0;coluna<4;coluna++){
        int somaColuna = 0;
        for(linha=0;linha<4;linha++){
            somaColuna += mat[linha][coluna];
        }
        printf("Soma da coluna %d -> %d\n", coluna+1, somaColuna);
    }

    printf("\n");

    return 0;
}