// 4 - Inversão de vetor:
// Escreva um programa que inverta a
// ordem dos elementos em um vetor.

#include <stdio.h>

int main(){
    int i, quantidade;

    printf("Quantos numeros voce quer adicionar ao vetor?");
    scanf("%d", &quantidade);

    int vetor[quantidade];

    for (i=0;i<quantidade;i++){
        printf("Digite o numero %d:", i+1);
        scanf("%d", &vetor[i]);
    }

    for (i=quantidade-1;i >= 0;i--){
        printf("%d -> ", vetor[i]);
    }

    return 0;

}