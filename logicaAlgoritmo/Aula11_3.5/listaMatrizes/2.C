// **Exercício 2:** Crie duas matrizes 2x2 e realize a soma entre elas. Armazene o
// resultado em uma terceira matriz e exiba o resultado na tela.

#include <stdio.h>

int main(){
    int mat1[2][2], mat2[2][2], mat3[2][2], linha, coluna;

    for(linha = 0; linha<2; linha++){
        for(coluna = 0; coluna<2;coluna++){
            printf("Matriz 1 -> elemento [%d] [%d]: ", linha, coluna);
            scanf("%d", &mat1[linha][coluna]);
            puts("");
        }
    }
    for (linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("Matriz 2 -> elemento [%d] [%d] : ", linha, coluna);
            scanf("%d", &mat2[linha][coluna]); 
            puts("");}
    }
    printf("\n\n Matriz 1");
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("| %d |", mat1[linha][coluna]);}
        puts("");
    }
    printf("\n\n Matriz 2");
    for(linha=0;linha<2;linha++){
        for(coluna=0;coluna<2;coluna++){
            printf("| %d |", mat2[linha][coluna]);}
        puts("");
    }
    printf("\n\n Soma das matrizes");
    for (linha=0;linha<2;linha++){
        for (coluna=0;coluna<2;coluna++){
            mat3[linha][coluna] = mat1[linha][coluna]+mat2[linha][coluna];
            printf("| %d |",mat3[linha][coluna]);}
        puts("");
    }
    return 0;
}