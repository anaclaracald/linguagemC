// Estruturas de decisão e Operadores lógicos Escreva um programa que leia um
// número e informe se ele é positivo, negativo ou zero.

#include <stdio.h>

int main(){
    int numero;

    printf("\n\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if(numero> 0){
        printf("Esse numero e positivo.\n\n");
    }else if (numero< 0){
        printf("Esse numero e negativo.\n\n");
    }else {
        printf("Esse numero é 0 (nulo).\n\n");
    }
    return 0;
}
