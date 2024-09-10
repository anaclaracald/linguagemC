// 1. **Cadastro de Alunos:** Crie uma estrutura `Aluno` com campos como nome, idade, matrícula, e média.
// Em seguida, crie um programa que permita ao usuário cadastrar informações de
// vários alunos e depois imprima essas informações na tela.

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SystemClear(){
    system("cls");
}

struct Aluno {
    char nome[50];
    int idade;
    int matricula;
    float media;
};

typedef struct Aluno aluno;

int main(){
    
    int nAlunos;    
    int i = 1;

    printf("\n\n-----Sistema de cadastramento de alunos-----\n\n");

    printf("Quantos alunos voce vai cadastrar?");
    scanf("%d", &nAlunos);
    fflush(stdin);
    
    aluno alunos[nAlunos];
    
    for (i=0;i<nAlunos;i++){
        printf("\n---Cadastro Aluno %d---\n", i+1);

        printf("\nNome: ");
        fgets(alunos[i].nome, 50 ,stdin);
        fflush(stdin);

        printf("\nIdade: ");
        scanf("%d", &alunos[i].idade);
        fflush(stdin);

        printf("\nMatricula: ");
        scanf("%d", &alunos[i].matricula);
        fflush(stdin);

        printf("\nMedia: ");
        scanf("%f", &alunos[i].media);
        fflush(stdin);
    }

    SystemClear();

    printf("\n\n---Dados cadastrados---");

    for (i=0;i<nAlunos;i++){
        printf("\nAluno %d", i+1);
        printf("\nNome: %s", alunos[i].nome);
        printf("Idade: %d", alunos[i].idade);
        printf("\nMatricula: %d", alunos[i].matricula);
        printf("\nMedia: %.2f", alunos[i].media);
        puts("");
    }

    return 0;
}