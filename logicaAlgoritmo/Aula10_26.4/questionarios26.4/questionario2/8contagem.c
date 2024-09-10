// 8. **Contagem de ocorrências de uma letra em uma string**:
// Escreva um programa que leia uma string e uma letra do
// usuário e conte quantas vezes a letra aparece na string. Exiba
// o resultado.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define n 20

int main(){
    char string[n];
    char letra;
    int i, contador = 0;

    printf("Digite uma string(19): ");
    fgets(string, n, stdin);

    printf("Digite uma letra:");
    scanf("%c", &letra);

    for (i=0;i<n;i++){
        if (string[i] == letra){
            contador++;
        }
    }

    printf("A letra %c aparece %d vezes em (%s)", letra, contador, string);

    return 0;
}