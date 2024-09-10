// 2. **Cadastro de Produtos:** Crie uma estrutura `Produto` com campos como nome, preço e quantidade em
// estoque. Em seguida, permita ao usuário cadastrar vários produtos e depois imprima essas informações na tela.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SystemClear(){
    system("cls");
}

typedef struct Produto {
    char nome[50];
    float preco;
    int quantidade;
}Produto;

int main(){
    
    int nProdutos;    
    int i = 1;

    printf("\n\n-----Sistema de cadastramento de produtos-----\n\n");

    printf("Quantos produtos voce vai cadastrar?");
    scanf("%d", &nProdutos);
    getchar();
    
    Produto produtos[nProdutos];
    
    for (i=0;i<nProdutos;i++){
        printf("\n---Cadastro de produtos %d---\n", i+1);

        printf("\nNome: ");
        fgets(produtos[i].nome, 50 ,stdin);
        fflush(stdin);

        printf("\nPreco: ");
        scanf("%f", &produtos[i].preco);
        fflush(stdin);

        printf("\nQuantidade: ");
        scanf("%d", &produtos[i].quantidade);
        fflush(stdin);
    }

    SystemClear();

    printf("\n\n---Dados cadastrados---");

    for (i=0;i<nProdutos;i++){
        printf("\nProduto %d", i+1);
        printf("\nNome: %s", produtos[i].nome);
        printf("Preco: R$%.2f", produtos[i].preco);
        printf("\nQuantidade: %d", produtos[i].quantidade);
        puts("");
    }

    return 0;
}