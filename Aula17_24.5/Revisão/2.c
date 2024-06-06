// Exercício 2: Laços de Repetição 
// Crie um programa que imprima os primeiros 10 números naturais utilizando um loop for.


#include <stdio.h>
#include <unistd.h>

int main (){
    int i;

    for (i = 0;i<=10;i++){
        printf("%d\n", i);
        sleep(1);
    }
    
    return 0;
}
