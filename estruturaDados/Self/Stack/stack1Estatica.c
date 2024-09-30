#include <stdio.h>
#include <stdlib.h>

// definir o tamanho da estrutura estatica
#define TAM 3

// definir um tipo para criar a pilha

typedef struct PILHA{
    int dados[TAM]; // vetor dos valores da pilha
    int topo; // variavel do topo variavel
} PILHA;

void inicializarPilha(PILHA *pilha){ // inicializa a pilha com o armazenador de endereço *pilha
    for(int i=0;i<TAM;i++){
        pilha ->dados[i] = 0;
    }
    pilha->topo = 0; // a função inicaliza toda a pilha tanto os dados quanto o topo em zero
}

void empilhar(int dado, PILHA *pilha){ // dado para preencher na pilha e o endereço da pilha que será acessada
    if(pilha->topo == TAM){
        printf("A pilha esta cheia!");
        return;
    } else {
        pilha->dados[pilha->topo] = dado;
        pilha->topo++;
        return;
    }
}

int desempilhar(PILHA *pilha){
    if(pilha->topo<=0){
        printf("A pilha esta vazia.");
        return 0;
    }else{
        pilha->topo--;
        return pilha->dados[pilha->topo];
    }
}

void imprimirPilha(PILHA *pilha){
    if(pilha->topo<=0){
        printf("A pilha esta vazia.");
        return;
    }
    printf("\nImprimindo pilha\n");
    for(int i = 0; i < pilha->topo; i++){
        printf("%d", pilha->dados[i]); // imprime até o topo 
    }
}

int main(){
    PILHA p1;

    inicializarPilha(&p1);
    imprimirPilha(&p1);

    empilhar(10, &p1);
    empilhar(20, &p1);
    empilhar(30, &p1);
    empilhar(40, &p1);
    imprimirPilha(&p1);

    desempilhar(&p1);
    imprimirPilha(&p1);
    return 0;
}