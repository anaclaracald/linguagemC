// Atribuições Aritméticas Escreva um programa que calcule o quadrado de um número
// usando atribuição aritmética.

#include <stdio.h>

int main(){
    int numero1;

    printf("\n\nN ao quadrado :)\n");

    printf("Digite um numero:");
    scanf("%d", &numero1);

    int quadrado = numero1*numero1;

    printf("%d x %d resulta em %d.\n\n", numero1,numero1, quadrado);

    return 0;
}
