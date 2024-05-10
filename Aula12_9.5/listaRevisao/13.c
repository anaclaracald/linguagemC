// Do While Implemente um programa que leia números do usuário até que ele digite 0, e
// então imprima a soma de todos os números digitados.

#include <stdio.h>

int main (){
    int numero;

    printf("\nDigite 0 para parar :)\n\n");

    do {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        puts("");
    } while (numero != 0);
    
    return 0;
}