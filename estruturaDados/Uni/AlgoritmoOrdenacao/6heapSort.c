#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

// Função para criar um heap
void heapify(int vetor[], int tamanho, int i) {
    int maior = i;
    int esquerda = 2 * i + 1;
    int direita = 2 * i + 2;
    int temporario;

    if (esquerda < tamanho && vetor[esquerda] > vetor[maior])
        maior = esquerda;

    if (direita < tamanho && vetor[direita] > vetor[maior])
        maior = direita;

    if (maior != i) {
        temporario = vetor[i];
        vetor[i] = vetor[maior];
        vetor[maior] = temporario;

        heapify(vetor, tamanho, maior);
    }
}

// Função Heap Sort
void heapSort(int vetor[], int tamanho) {
    int i, temporario;

    for (i = tamanho / 2 - 1; i >= 0; i--)
        heapify(vetor, tamanho, i);

    for (i = tamanho - 1; i >= 0; i--) {
        temporario = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = temporario;

        heapify(vetor, i, 0);
    }
}

int main() {
    int vetor[TAMANHO_VETOR];
    int indice, numeroAleatorio;

    srand(time(NULL));

    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100;
        vetor[indice] = numeroAleatorio;
    }

    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    heapSort(vetor, TAMANHO_VETOR);

    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
