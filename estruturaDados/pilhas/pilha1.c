#include <stdio.h>

typedef struct data{
    int dia, mes, ano;
}Data;

typedef struct pessoa{
    char nome[50];
    Data data;
}Pessoa;

typedef struct pilha { // define uma struct pilha com um tipo dado e um tipo pilha para manipular o espaço de memória dinamicamente 
    Pessoa p;
    struct pilha *proximo;
} No;

Pessoa lerPessoa(){
    Pessoa p;

    printf("\nDigite o nome e a data de nascimento dd mm aaaa: ");
    scanf("%49[^\n]%d%d%d", p.nome, &p.data.dia, &p.data.mes, &p.data.ano);
}

void imprimirPessoa(Pessoa p){
    printf("\NNome: %s \nData: %2d/%2d/%4d\n", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

int main(){
    // inicializar o topo em null por que a pilha começa vazia
    No *topo = NULL;
    int opcao;

    do{
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 0:

            break;
        case 1:
            break;
        case 2: 
            break;
        default:
            if(opcao !=0){
                printf("\nOpcao invalida!!\n");
            }
        }
    }while (opcao !=0);

    return 0;
}