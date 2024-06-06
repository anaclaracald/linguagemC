// Exercício 3: Estruturas de Decisão 
// Crie um programa que leia um número e diga se ele é positivo, negativo ou zero.

#include <stdio.h>

int numero = 0;

int main(){
    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if (numero>0){
        printf("Esse numero e positivo.");
    }else if (numero<0){
        printf("Esse numero e negativo.");
    }else {
        printf("Esse numero e nulo.");
    }

    return 0;
}