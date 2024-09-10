// 4. **Concatenação de strings**:
// Escreva um programa que leia duas strings do usuário e
// concatene-as em uma terceira string. Em seguida, exiba a string resultante.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char nome[20];
    char sobrenome[50];
    char nomeCompleto[80];

    printf("Digite seu primeiro nome:");
    fgets(nome, 20, stdin);

    printf("Digite seu sobrenome:");
    fgets(sobrenome, 50, stdin);

    strcat(nome, sobrenome);

    strcpy(nomeCompleto, nome);

    printf("\nNome completo: %s", nomeCompleto);

    return 0;
}