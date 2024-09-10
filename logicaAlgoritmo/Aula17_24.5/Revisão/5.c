// Exercício 5: Structs
// 5 Crie um programa que defina uma struct para representar um estudante (nome, idade e nota). Leia os dados de 3 estudantes e imprima-os.

#include <stdio.h>
#include <string.h>

int i;

void SystemClear(){
    system("cls");
}

typedef struct Estudante{
    char nome[50];
    int idade;
    float nota;
}Estudante;

int main(){
    Estudante estudantes[3];

    for (i=0;i<3;i++){
        printf("-- Cadastro de estudantes --");
        printf("\nEstudante %d", i+1);
        puts("");

        printf("\nNome: ");
        fgets(estudantes[i].nome, 50, stdin);
        fflush(stdin);

        printf("\nIdade: ");
        scanf("%d", &estudantes[i].idade);
        fflush(stdin);

        printf("\nNota: ");
        scanf("%f", &estudantes[i].nota);
        fflush(stdin);
        puts("");
    }

    SystemClear();

    for(i=0; i<3;i++){
        printf("Estudante %d\n", i+1);
        printf("Nome: %s", estudantes[i].nome);
        printf("Idade: %d\n", estudantes[i].idade);
        printf("Nota: %.2f\n\n", estudantes[i].nota);
    }

    return 0;
}