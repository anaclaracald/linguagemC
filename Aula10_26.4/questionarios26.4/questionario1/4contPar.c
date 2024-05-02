// 4. **Contagem de Elementos Pares:**
// Implemente um programa que conte quantos números pares existem em um vetor de inteiros.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define n 15

int main(){

    srand(time(NULL)); 

    int vetor[n], i, numPares = 0, pares[numPares];

    for (i=0; i < n;i++){
        vetor[i] = rand() % 100 +1;
        if (vetor[i] % 2 == 0){
            pares[numPares++] = vetor[i];}
    }
    
    printf("\n\nVetor completo: ");
    for (i=0;i<n; i++){
        printf("%d -> ", vetor[i]);
    }

    printf("\n\nNumeros pares: ");
    for (i=0;i<numPares;i++){
        printf("%d -> ", pares[i]);
    }

    printf("\n\nQuantidade de numero pares no vetor de 14 elementos -> %d", numPares);

    return 0;

}