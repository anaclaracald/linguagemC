#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* proximo;
}Node;

typedef struct fila{
    Node* inicio;
    Node* fim;
}FILA;

FILA *criarFila(){
    FILA *fila = (FILA*) calloc(1, sizeof(FILA));
    fila->inicio = fila->fim = NULL;
    return fila;
}

Node *criarNode(int data){
    Node *node = (Node*) calloc(1, sizeof(Node));
    node->proximo = NULL;
    node->data = data;
    return node;
}

void enqueue(FILA *fila, int data){
    Node* node = criarNode(data);
    
    if(fila->fim == NULL){
        fila->inicio = fila->fim = node;
        return;
    }else{
        fila->fim->proximo = node;
        fila->fim = node;
    }
}

int dequeue(FILA *fila){
    if(fila->inicio == NULL){
        printf("A fila está vazia.\n");
        exit(-1);
    }

    Node* temp = fila->inicio;
    int data = temp->data;
    fila->inicio = fila->inicio->proximo;

    if(fila->inicio == NULL){
        fila->fim = NULL;
    }

    free(temp);
    return data;

}

void display(FILA *fila){
    if(fila->inicio == NULL){
        printf("A fila esta vazia.");
        return;
    }

    Node *node = fila->inicio;
    printf("Elementos na fila: ");
    while (node !=NULL){
        printf("%d", node->data);
        node = node->proximo;
    }
    printf("\n");
}

int main(){

    FILA *f1 = criarFila();
    enqueue(f1, 10);
    enqueue(f1, 20);
    enqueue(f1, 30);

    display(f1);

    printf("Removido: %d\n", dequeue(f1));
    display(f1);

    enqueue(f1, 40);
    display(f1);
     
    return 0;
}