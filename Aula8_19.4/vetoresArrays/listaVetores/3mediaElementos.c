// 3 - Média dos elementos em um vetor:
// Escreva um programa que calcule a média
// dos elementos em um vetor.

#include <stdio.h>

int main() {
    int i,quantidade; 
    float soma = 0;

    printf("\nVoce quer a media de quantos numeros?");
    scanf("%d", &quantidade);

    int elementos[quantidade];

    for (i=0;i<quantidade;i++){
        printf("\nDigite o numero %d:", i+1);
        scanf("%d", &elementos[i]);
        soma += elementos[i];
    }

    float media = soma/quantidade;

    printf("\nSoma dos numeros = %2.f", soma);
    printf("\nMedia dos numeros =%2.f", media);
    
    return 0;

}