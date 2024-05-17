// 3. **Cadastro de Pessoas:** Crie uma estrutura `Pessoa` com campos como nome, idade, e cidade. Permita ao
// usuário cadastrar várias pessoas e depois imprima essas informações na tela.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SystemClear(){
    system("cls");
}

typedef struct Pessoa {
    char nome[50];
    int idade;
    char cidade[50];
}pessoa;

int main(){
    
    int nPessoas;    
    int i = 1;

    printf("\n\n-----Sistema de cadastramento de pessoas-----\n\n");

    printf("Quantos pessoas voce vai cadastrar?");
    scanf("%d", &nPessoas);
    getchar();
    
    pessoa pessoas[nPessoas];
    
    for (i=0;i<nPessoas;i++){
        printf("\n---Cadastro de pessoas %d---\n", i+1);

        printf("\nNome: ");
        fgets(pessoas[i].nome, 50 ,stdin);
        fflush(stdin);

        printf("\nIdade: ");
        scanf("%f", &pessoas[i].idade);
        fflush(stdin);

        printf("\nCidade: ");
        fgets(pessoas[i].cidade, 50 ,stdin);
        fflush(stdin);
    }

    SystemClear();

    printf("\n\n---Dados cadastrados---");

    for (i=0;i<nPessoas;i++){
        printf("\nPessoa %d", i+1);
        printf("\nNome: %s", pessoas[i].nome);
        printf("Idade: R$%.2f", pessoas[i].idade);
        printf("\nCidade: %d", pessoas[i].cidade);
        puts("");
    }

    return 0;
}