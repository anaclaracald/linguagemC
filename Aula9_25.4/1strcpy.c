#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 20

int main (){
    // nao se compara string com igual :)
    char origem[N] = {"Olá, mundo!"};
    char destino[N];

    printf("Antes do strcpy:\n");
    puts(origem);
    puts(destino);

    // alterar o conteúdo da string
    // esse strcpy é igual a destino = origem numa linguagem descente
    strcpy(destino, origem);

    printf("Depois do strcpy:\n");
    puts(origem);
    puts(destino);

}