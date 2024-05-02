// 6. **Produto de Números em um Vetor:**
// Implemente um programa que calcule o produto de todos os números em um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>

#define n 5

int main(){
    int i, multiplicacao = 1, vetor[n];

    srand(time(NULL));

    printf("\n");

    for (i=0; i<n;i++){
        vetor[i] = rand() % 11;
        printf("%d -> ", vetor[i]);
        multiplicacao *= vetor[i];
    }

    printf("A multiplicacao dos elementos desse vetor resulta em %d\n\n", multiplicacao);

    return 0;
}