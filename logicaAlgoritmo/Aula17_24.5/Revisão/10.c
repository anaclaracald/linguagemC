// Exercício 10: Structs e Vetores
// 10 Crie um programa que defina uma struct para representar um funcionário (nome, idade, salário). Leia os dados de 5
// funcionários, armazene-os em um vetor de structs e, em seguida, imprima os dados de todos os funcionários.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SystemClear(){
    system("cls");
}

typedef struct Funcionario {
    char nome[50];
    int idade;
    float salario;
    
}funcionario;

int main(){
    
    int nFuncionarios;    
    int i = 1;

    printf("\n\n-----Sistema de cadastramento de funcionarios-----\n\n");

    printf("Quantos funcionarios voce vai cadastrar?");
    scanf("%d", &nFuncionarios);
    getchar();
    
    funcionario funcionarios[nFuncionarios];
    
    for (i=0;i<nFuncionarios;i++){
        printf("\n---Cadastro de Funcionarios %d---\n", i+1);

        printf("\nNome: ");
        fgets(funcionarios[i].nome, 50 ,stdin);
        fflush(stdin);

        printf("\nIdade: ");
        fgets(funcionarios[i].idade, 50 ,stdin);
        fflush(stdin);

        printf("\nSalario: ");
        scanf("%f", &funcionarios[i].salario);
        fflush(stdin);
    }

    SystemClear();

    printf("\n\n---Dados cadastrados---");

    for (i=0;i<nFuncionarios;i++){
        printf("\nFuncionario %d", i+1);
        printf("\nNome: %s", funcionarios[i].nome);
        printf("\nIdade: %s", funcionarios[i].idade);
        printf("\nSalario: R$%.2f", funcionarios[i].salario);
        puts("");
    }

    return 0;
}