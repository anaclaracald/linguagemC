// 6. **Cópia de strings**:
// Escreva um programa que leia uma string do usuário e copie-
// a para outra string. Em seguida, exiba a string copiada.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define n 8

int main(){
    char string1[n];
    char string2[n];

    printf("Digite um nome: ");
    fgets(string1, n, stdin);

    strcpy(string2,string1);

    printf("String 1: %s", string1);
    printf("String 2: %s", string2);

    return 0;
}