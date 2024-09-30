#include <stdio.h>
#include <stdlib.h>

// Estrutura de um nó da pilha
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Estrutura da pilha
typedef struct Stack {
    Node* top;
} Stack;

// Função para criar uma nova pilha
Stack* criarStack() {
    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->top = NULL;
    return stack;
}

// Função para criar um novo nó
Node* criarNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// Função para verificar se a pilha está vazia
int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

// Função para adicionar um elemento à pilha (push)
void push(Stack* stack, int data) {
    Node* newNode = criarNode(data);
    newNode->next = stack->top;
    stack->top = newNode;
    printf("Elemento %d adicionado à pilha.\n", data);
}

// Função para remover um elemento da pilha (pop)
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("A pilha está vazia. Não é possível remover elementos.\n");
        return -1;
    }
    Node* temp = stack->top;
    int removedData = temp->data;
    stack->top = stack->top->next;
    free(temp);
    printf("Elemento %d removido da pilha.\n", removedData);
    return removedData;
}

// Função para exibir o elemento no topo da pilha
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("A pilha está vazia.\n");
        return -1;
    }
    return stack->top->data;
}

// Função para exibir todos os elementos da pilha
void exibirStack(Stack* stack) {
    if (isEmpty(stack)) {
        printf("A pilha está vazia.\n");
        return;
    }
    system("cls"); // Limpa a tela
    Node* temp = stack->top;
    printf("Elementos da pilha: ");
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
    printf("Pressione qualquer tecla para voltar ao menu...");
    getchar(); // Espera por uma entrada do usuário
    getchar(); // Necessário para capturar o '\n' deixado pelo scanf
}

// Função para liberar a memória da pilha
void liberarStack(Stack* stack) {
    while (!isEmpty(stack)) {
        pop(stack);
    }
    free(stack);
    printf("Memória da pilha liberada.\n");
}

// Função para exibir o menu de operações
void menu() {
    printf("\nMenu de Operações:\n");
    printf("1. Adicionar elemento (push)\n");
    printf("2. Remover elemento (pop)\n");
    printf("3. Exibir o topo da pilha (peek)\n");
    printf("4. Exibir toda a pilha\n");
    printf("5. Sair\n");
    printf("Escolha uma opção: ");
}

int main() {
    Stack* stack = criarStack();
    int escolha, valor;

    while (1) {
        menu();
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                printf("Digite o valor a ser adicionado: ");
                scanf("%d", &valor);
                push(stack, valor);
                break;
            case 2:
                pop(stack);
                break;
            case 3:
                valor = peek(stack);
                if (valor != -1) {
                    printf("Topo da pilha: %d\n", valor);
                }
                break;
            case 4:
                exibirStack(stack);
                break;
            case 5:
                liberarStack(stack);
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opção inválida! Tente novamente.\n");
        }
    }
    return 0;
}
