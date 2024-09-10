#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int escolha;

    puts("Escolha qual codigo voce quer rodar:");
    puts("[1] scanf simples");
    puts("[2] scanf aprimorado");
    puts("[3] gets");
    puts("[4] fgets");
    puts("[5] strcpy");
    puts("[6] strcat");
    puts("[7] strcmp");
    scanf("%d", &escolha);

    switch (escolha){
        case 1:
            char nome[10];
            char sobrenome[10];
            char curso[40];

            puts("Digite seu nome:");
            scanf("%s", nome);
            fflush(stdin);

            puts("Digite o ultimo sobrenome:");
            scanf("%s", sobrenome);
            fflush(stdin);

            puts("Digite seu curso:");
            scanf("%s",  curso);
            fflush(stdin);

            printf("\nNome: %s\nSobrenome: %s\nCurso: %s\n", nome, sobrenome, curso);
            return 0;
            break;
        
        case 2:
            char nome[10];
            char sobrenome[10];
            char curso[40];

            puts("Digite seu nome:");
            scanf("%9[^\n]s", nome);
            fflush(stdin);

            puts("Digite o ultimo sobrenome:");
            scanf("%9[^\n]s", sobrenome);
            fflush(stdin);

            puts("Digite seu curso:");
            scanf("%39[^\n]s",  curso);
            fflush(stdin);

            printf("\nNome: %s\nSobrenome: %s\nCurso: %s\n", nome, sobrenome, curso);
            return 0;
            break;

        case 3:
            char nome[10];
            char sobrenome[10];
            char curso[40];

            puts("Digite seu nome:");
            gets(nome);
            fflush(stdin);

            puts("Digite o ultimo sobrenome:");
            gets(sobrenome);
            fflush(stdin);

            puts("Digite seu curso:");
            gets(curso);
            fflush(stdin);

            printf("\nNome: %s\nSobrenome: %s\nCurso: %s\n", nome, sobrenome, curso);
            return 0;
            break;

        case 4:
            char nome[10];
            char sobrenome[10];
            char curso[40];

            puts("Digite seu nome:");
            fgets(nome, 10, stdin);
            fflush(stdin);

            puts("Digite o ultimo sobrenome:");
            fgets(sobrenome, 10, stdin);
            fflush(stdin);

            puts("Digite seu curso:");
            fgets(curso, 40, stdin);
            fflush(stdin);

            printf("\nNome: %s\nSobrenome: %s\nCurso: %s\n", nome, sobrenome, curso);
            return 0;
            break;

        case 5:
            char nome[15];
            char nome2[15] = "Caldeira";

            strcpy(nome, nome2);

            printf("Nome: %s\n", nome);
            
            return 0;
            break;

        case 6:

        
        case 7:
            char s[N];
            int i;

            printf("Digite um texto: \n");
            fgets(s,35,stdin);
            // tamanho da string
            i = strlen(s);

            printf("\nTamanho do texto: %d\n", i);

            printf("Tamanho de posição em posição:\n");

            for (i= 0; i< strlen(s); i++){
                printf("%c\n", s[i]);
            }

            return 0;
            break;

        case 8:
            char
        default:
            break;
    }
    

    return 0;

}