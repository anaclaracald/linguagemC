// Strings e Funções de Biblioteca Implemente um programa que leia uma string (nome)
// e exiba o comprimento da string (número de caracteres).

#include <stdio.h>
#include <string.h>

#define N 35

int main (){

    char nome[N];
    int i;

    printf("Digite seu nome: \n");
    fgets(nome,35,stdin);

    nome[strcspn(nome, "\n")] = '\0';
    i = strlen(nome);

    printf("\nTamanho do nome: %d\n", i);

    return 0;
}