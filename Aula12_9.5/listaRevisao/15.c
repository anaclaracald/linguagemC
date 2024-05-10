// Comando de Controle de Desvio e Vetores Escreva um programa que preencha um
// vetor com 10 números inteiros e depois imprima apenas os números positivos.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    srand(time(NULL));

    int vetor[10], i;

    for (i=0;i<10;i++){
        vetor[i] = (rand() %20)-10;
        if (vetor[i]> 0){
            printf("%d | ", vetor[i]);
        }
    }

    return 0;
}