// Operadores de Entrada e Saída de Dados Escreva um programa que leia o nome e a
// idade de uma pessoa e depois imprima esses dados.

#include <stdio.h>
#include <string.h>

int main(){
    char nome[15];
    int idade;

    printf("Digite seu primeiro nome: ");
    fgets(nome, 15, stdin);

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("\nNome: %s\nIdade: %d\n", nome, idade);

    return 0;
}