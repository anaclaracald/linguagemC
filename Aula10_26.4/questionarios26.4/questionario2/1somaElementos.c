// 1. **Soma de elementos em um array**: dado o int array[5] =
// {1,2,3,4,5}, Escreva um programa que calcule a soma de todos
// os elementos em um array de inteiros.

#include <stdio.h>


int main(){
    int array[5] = {1,2,3,4,5};
    int i, soma = 0;

    for (i = 0; i < 5; i++){
        printf("%d -> ", array[i]);
        soma += array[i];
    }

    printf(" soma = %d", soma);
    return 0;
}