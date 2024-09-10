// 2 - Maior elemento em um vetor:
// Escreva um programa que encontre o
// maior elemento em um vetor.

#include <stdio.h>

int main(){

    int elementos[3];
    int i;

    // loop que adiciona os elementos que o usuario digita no vetor
    for (i=0;i<3;i++){
        printf("Digite um numero: ");
        scanf("%d", &elementos[i]);
    }

    // define o elemento com indice 0 como o maior para ser comparado posteriormente
    int maior = elementos[0];

    // loop que testa elemento por elemento se o elementos[0] continua sendo o maior
    for (i=0;i<3;i++){
        if (elementos[i]> maior){
            maior = elementos[i];
        }
    }
    
    printf("O maior numero e %d", maior);

    return 0;
}