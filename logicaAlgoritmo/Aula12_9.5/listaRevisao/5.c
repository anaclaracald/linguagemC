#include <stdio.h>

int main(){
    int mat[3][3], linha= 0, coluna= 0, soma=0;

    for (linha=0; linha<3;linha++){
        for (coluna=0;coluna<3; coluna++){
            printf("Elemento da linha %d e coluna %d:", linha, coluna);
            scanf("%d", &mat[linha][coluna]);
            if (linha == coluna){
                soma+= mat[linha][coluna];
            }
            printf("\n");
        }
    }

    for (linha= 0; linha<3; linha++){
        for (coluna= 0;coluna<3; coluna++){
            printf("| %d |", mat[linha][coluna]);
        }
        puts("");
    }

    printf("\n\nA soma da diagonal é [0][0], [1][1] e [2][2] é igual a %d.\n", soma);

    return 0; 
}