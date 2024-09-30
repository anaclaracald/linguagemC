#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

void selectionSort(int vetor[], int tamanho) {
    int i, j, indiceMenor, auxiliar; 

    // Percorre o vetor ate o penultimo elemento, pois no fim o último elemento ja estara no lugar certo
    for (i = 0; i < tamanho - 1; i++) {
        indiceMenor = i; // Inicializa indiceMenor, assumindo que o menor é a posição atual i

        for (j = i + 1; j < tamanho; j++) {// Encontra o menor elemento no vetor nao ordenado
            
            if (vetor[j] < vetor[indiceMenor]) {// verifica qual o menor elemento e passa seu novo indice
                indiceMenor = j;
            }
        }
        
        auxiliar = vetor[indiceMenor]; // guarda o valor do menor elemento
        // Troca o menor elemento encontrado com o primeiro elemento
        vetor[indiceMenor] = vetor[i];
        vetor[i] = auxiliar;
    }
}


int main() {
    int vetor[TAMANHO_VETOR];
    int indice, numeroAleatorio;
    srand(time(NULL));

    // Preenche o vetor com valores aleatorios e unicos
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100;
        vetor[indice] = numeroAleatorio;
    }

    // Exibe o vetor antes da ordenacao
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    // Ordena o vetor usando Selection Sort
    selectionSort(vetor, TAMANHO_VETOR);

    // Exibe o vetor apos a ordenacao
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
