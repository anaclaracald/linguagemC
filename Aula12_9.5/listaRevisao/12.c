// While Escreva um programa que imprima todos os números pares de 0 até 100.

#include <stdio.h> 

int main() {
    int i=0;

    puts("");

    while (i<=100){
        if (i%2 == 0){
            if(i == 100){
                printf(" %d.", i);
            }else{
                printf(" %d,", i);
            }
        }i++;
    }

    return 0;
}