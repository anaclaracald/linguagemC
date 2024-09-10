// 5. **Cadastro de Livros:**Crie uma estrutura `Livro` com campos como título, autor e ano de publicação.
// Permita ao usuário cadastrar vários livros e depois imprima essas informações na tela.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SystemClear(){
    system("cls");
}

typedef struct Livro {
    char titulo[50];
    char autor[50];
    int dia;
    int mes;
    int ano;
    
}livro;

int main(){
    
    int nLivros;    
    int i = 1;

    printf("\n\n-----Sistema de cadastramento de livros-----\n\n");

    printf("Quantos livros voce vai cadastrar?");
    scanf("%d", &nLivros);
    getchar();
    
    livro livros[nLivros];
    
    for (i=0;i<nLivros;i++){
        printf("\n---Cadastro de livro %d---\n", i+1);

        printf("\nTitulo: ");
        fgets(livros[i].titulo, 50 ,stdin);
        fflush(stdin);

        printf("\nAutor: ");
        fgets(livros[i].autor, 50 ,stdin);
        fflush(stdin);

        printf("\nDia (xx): ");
        scanf("%d", &livros[i].dia);
        fflush(stdin);

        printf("\nMes (xx): ");
        scanf("%d", &livros[i].mes);
        fflush(stdin);

        printf("\nAno (xxxx): ");
        scanf("%d", &livros[i].ano);
        fflush(stdin);
    }

    SystemClear();

    printf("\n\n---Dados cadastrados---");

    for (i=0;i<nLivros;i++){
        printf("\nLivro %d", i+1);
        printf("\nTitulo: %s", livros[i].titulo);
        printf("Autor: %s", livros[i].autor);
        printf("Data de publicacao: %d/%d/%d", livros[i].dia, livros[i].mes, livros[i].ano);
        puts("");
    }

    return 0;
}