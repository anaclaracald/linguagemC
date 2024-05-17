// 4. **Registro de Funcionários:** Crie uma estrutura `Funcionario` com campos como nome, cargo e salário.
// Permita ao usuário cadastrar informações de vários funcionários e depois imprima
// essas informações na tela.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void SystemClear(){
    system("cls");
}

typedef struct Funcionario {
    char nome[50];
    char cargo[50];
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

        printf("\nCargo: ");
        fgets(funcionarios[i].cargo, 50 ,stdin);
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
        printf("\nCargo: %s", funcionarios[i].cargo);
        printf("\nSalario: R$%.2f", funcionarios[i].salario);
        puts("");
    }

    return 0;
}