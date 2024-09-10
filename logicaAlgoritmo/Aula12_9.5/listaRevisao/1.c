// Operadores de entrada e saída de dados Escreva um programa que leia dois
// números inteiros e imprima a soma deles.

#include <stdio.h>

int main() {
    int numero1, numero2;

    printf("\n\nSoma de dois inteiros :)\n");

    printf("Digite um numero:");
    scanf("%d", &numero1);

    printf("Digite outro numero:");
    scanf("%d", &numero2);

    printf("A soma do numero %d e do numero %d resulta em %d.\n\n", numero1, numero2, numero1+numero2);

    return 0;
}