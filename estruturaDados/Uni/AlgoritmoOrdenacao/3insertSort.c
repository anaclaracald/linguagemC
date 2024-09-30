#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

void insertionSort(int vetor[], int tamanho) {
    int i, chave, j;
    for (i = 1; i < tamanho; i++) { // Percorre o vetor a partir do segundo elemento
        chave = vetor[i]; // Armazena o valor atual do vetor em 'chave'
        j = i - 1; // Inicializa j como o indice do último elemento do sub-vetor ordenado

        // Move os elementos que sao maiores que a chave para uma posicao a frente
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j]; // Move o elemento maior para a posição a frente
            j = j - 1; // Decrementa j para continuar comparando
        }
        vetor[j + 1] = chave; // Insere a chave na posicao correta
    }
}

int main() {
    int vetor[TAMANHO_VETOR]; 
    int indice, numeroAleatorio; 
    srand(time(NULL));  

    // Preenche o vetor com numeros aleatorios
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100; 
        vetor[indice] = numeroAleatorio; 
    }
    
    // Imprime o vetor antes da ordenacao
    printf("Vetor original: "); 
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]); 
    }
    printf("\n"); 
    
    // Chama a funcao para ordenar o vetor
    insertionSort(vetor, TAMANHO_VETOR); 
    
    // Imprime o vetor ordenado
    printf("Vetor ordenado: "); 
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]); 
    }
    printf("\n"); 

    return 0; 
}