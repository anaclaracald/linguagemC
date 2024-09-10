// Variáveis e Operadores Aritméticos Crie um programa que leia dois números e
// imprima o resultado da multiplicação entre eles.

#include <stdio.h>

int main(){
    int numero1, numero2;

    printf("\n\nMultiplicacao de dois inteiros :)\n");

    printf("Digite um numero:");
    scanf("%d", &numero1);

    printf("Digite outro numero:");
    scanf("%d", &numero2);

    printf("A multiplicacao do numero %d e do numero %d resulta em %d.\n\n", numero1, numero2, numero1*numero2);

    return 0;
}
