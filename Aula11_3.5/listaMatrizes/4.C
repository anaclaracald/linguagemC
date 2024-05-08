// **Exercício 4:** Crie uma matriz 3x3 e realize a multiplicação de todos os seus
// elementos por um valor fornecido pelo usuário. Exiba a matriz resultante.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    srand(time(NULL));

    int mat[3][3], linha, coluna, multiplicador;

    for (linha=0;linha<3;linha++){
        for (coluna=0; coluna<3;coluna++){
            mat[linha][coluna] = rand () % 10;
            printf("| %d |", mat[linha][coluna]);
        }
        printf("\n");
    }

    printf("Escolha um número para multiplicar os elementos da matriz acima: ");
    scanf("%d", &multiplicador);

    for (linha=0;linha<3;linha++){
        for (coluna=0;coluna<3;coluna++){
            mat[linha][coluna] *= multiplicador;
            printf("| %d |", mat[linha][coluna]);
        }
        printf("\n");
    }

    return 0;
}