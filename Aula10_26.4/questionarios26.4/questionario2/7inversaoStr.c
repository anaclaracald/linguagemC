// 7. **Inversão de uma string**:
// Escreva um programa que leia uma string do usuário e
// inverta os caracteres na string. Em seguida, exiba a string
// invertida.

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#define n 12

int main(){
    char nome[n], temp;
    int i, tamanho;

    printf("Digite um nome: ");
    fgets(nome, sizeof(nome), stdin);

    tamanho = strlen(nome);

    for (i=0;i<tamanho/2;i++){
        temp = nome[i];
        nome[i]= nome[tamanho-1-i];
        nome[tamanho-1-i] = temp;
    }

    printf("String invertida: %s\n", nome); 

    return 0;
}