// 2. **Média de elementos em um array**:dado o float array[] =
// {1.5, 2.5, 3.5, 4.5, 5.5} Escreva um programa que calcule a
// média dos elementos em um array de ponto flutuante.

#include <stdio.h>

int main(){
    float array[5] = {1.5, 2.5, 3.5, 4.5, 5.5}, soma;
    int i;

    for (i = 0; i < 5; i++){
        printf("%.2f -> ", array[i]);
        soma += array[i];
    }

    printf("\nA media dos numeros e %.2f", soma/5);
    return 0;
}