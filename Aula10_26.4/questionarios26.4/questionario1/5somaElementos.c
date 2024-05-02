// 5. **Soma dos Elementos:**
// Escreva um programa que calcule a soma de todos os elementos de um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

#define N 10

int main (){
    int i, soma = 0, vetor[N];

    srand(time(NULL));

    printf("\n\n");

    for (i=0; i<N;i++){
        vetor[i] = rand() % 51;
        printf("%d -> ", vetor[i]);
        soma += vetor[i];
    }

    printf("A soma dos elementos do vetor gerado resulta em %d\n\n", soma);

    return 0;
}