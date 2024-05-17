#include <stdio.h>

#define N 30

struct _pessoa {
    char nome[N];
    int idade;
    float peso;
};

typedef struct _pessoa Pessoa;

int main(){
    Pessoa pessoa1 = {17,50.0,"Ana"};

    puts("Imprimindo dados de pessoa");
    printf("Nome: %s", pessoa1.nome);

    return 0;
}