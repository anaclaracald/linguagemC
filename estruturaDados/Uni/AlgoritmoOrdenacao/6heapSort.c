#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6 

// Função para criar um heap
void heapify(int vetor[], int tamanho, int i) {
    int maior = i; // Inicializa o maior 
    int esquerda = 2 * i + 1; // Indice do filho a esquerda
    int direita = 2 * i + 2; // Indice do filho a direita
    int temporario; // Variavel temporaria para troca de elementos

    // Verifica se o filho a esquerda eh maior que a raiz
    if (esquerda < tamanho && vetor[esquerda] > vetor[maior])
        maior = esquerda;

    // Verifica se o filho a direita eh maior que o maior ate agora
    if (direita < tamanho && vetor[direita] > vetor[maior])
        maior = direita;

    // Se o maior nao for a raiz
    if (maior != i) {
        // Troca a raiz com o maior
        temporario = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temporario;

        // Recursivamente transforma o subarvore afetado em um heap
        heapify(vetor, tamanho, maior);
    }
}

void heapSort(int vetor[], int tamanho) {
    int i, temporario;

    // Constroi um heap (reorganiza o vetor)
    for (i = tamanho / 2 - 1; i >= 0; i--)
        heapify(vetor, tamanho, i);

    // Extrai elementos um por um do heap
    for (i = tamanho - 1; i >= 0; i--) {
        // Move a raiz atual para o final
        temporario = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temporario;

        // Chama heapify no heap reduzido
        heapify(vetor, i, 0);
    }
}

int main() {
    int vetor[TAMANHO_VETOR]; 
    int indice, numeroAleatorio; 
    srand(time(NULL)); 

    // Preenche o vetor com números aleatórios
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100; 
        vetor[indice] = numeroAleatorio; 
    }

    // Exibe o vetor original
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    // Chama a função Heap Sort para ordenar o vetor
    heapSort(vetor, TAMANHO_VETOR);

    // Exibe o vetor ordenado
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
