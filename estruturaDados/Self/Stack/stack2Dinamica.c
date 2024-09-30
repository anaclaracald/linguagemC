#include <stdio.h>
#include <stdlib.h>

typedef struct NO{ // struct para a estrutura do nó é como se fosse o elemento da pilha
    int dado; // dado do elemento
    struct NO *proximo; // ponteiro do tipo NO para o proximo elemento da pilha
}NO;

typedef struct PILHA{
    NO *topo; // na estrutura pilha nós armazenamos um ponteiro para o topo
}PILHA;

PILHA *criarPilha(){
    PILHA *p1 = (PILHA*) malloc(sizeof(PILHA));
    pilha->topo = NULL;
}

NO *criarNo(int dado){
    NO *newNo = (NO*) malloc(sizeod(NO));
}

void push(int dado, PILHA *pilha){
    // alocar a memoria para a criação do no
    NO *ponteiroNo = (NO*) malloc(sizeof(NO));
    ponteiroNo->proximo = pilha->topo;// agora voce aponta para onde a pilha apontava
    pilha->topo = ponteiroNo; // seu topo agora é o novo n[o]
    
}

int pop(PILHA *pilha){ // essa função vai retornar o valor do nó removido do topo
    NO* ponteiroNo = pilha->topo; // aqui ele fala "O topo da pilha agora é ponteiroNo"
    int dado;
    if(pilha->topo == NULL){
        printf("A pilha esta vazia.");
        exit(1);
    }else{
        pilha->topo = ponteiroNo->proximo; // redireciona o topo para o proximo 
        ponteiroNo->proximo = NULL; // o antigo topo agora é desligado da pilha
        dado = ponteiroNo->dado; // armazena o valor armazenada no nó que fazia parte da pilha
        free(ponteiroNo);
        return dado;
    }
}

void imprimePilha(PILHA *pilha){
    NO *ponteiroNo = pilha->topo; // o ponteiro aponta para o topo da pilha
    if(ponteiroNo == NULL){
        printf("Pilha vazia.\n");
        return;
    }else{
        while(ponteiroNo != NULL){
            printf("%d \n", ponteiroNo->dado);
            ponteiroNo = ponteiroNo->proximo;
        }
        printf("\n\n\n");
    }
}

int main(){
    PILHA *p1 = criarPilha();
    inicializarPilha(p1);
    empilhar(10, p1);
    empilhar(20, p1);
    empilhar(30, p1);
    imprimePilha(p1);
    desempilhar(p1);
    imprimePilha(p1);
}