// 1 - Soma de elementos em um vetor:
// Escreva um programa que calcula a soma de todos os
// elementos em um vetor.

#include <stdio.h>

int main() {

    int i, soma = 0, quantidade;

    printf("Quantos numeros voce quer somar?");
    scanf("%d", &quantidade);

    int elementos[quantidade];

    for (i = 0; i < quantidade; i++){
        printf("\nDigite o numero %d: ", i+1);
        scanf("%d", &elementos[i]);
        soma += elementos[i];
    }

    printf("\nA soma dos elementos resulta em %d", soma);

    return 0;
    
}