#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

void insertionSort(int vetor[], int tamanho) {
    int i, chave, j;
    for (i = 1; i < tamanho; i++) { // Percorre o vetor a partir do segundo elemento
        chave = vetor[i]; // Armazena o valor atual do vetor em 'chave'
        j = i - 1; // Inicializa j como o índice do último elemento do sub-vetor ordenado

        // Move os elementos que são maiores que a chave para uma posição à frente
        while (j >= 0 && vetor[j] > chave) {
            vetor[j + 1] = vetor[j]; // Move o elemento maior para a posição à frente
            j = j - 1; // Decrementa j para continuar comparando
        }
        vetor[j + 1] = chave; // Insere a chave na posição correta
    }
}

int main() {
    int vetor[TAMANHO_VETOR]; // Declara um vetor de inteiros
    int indice, numeroAleatorio; // Declara variáveis para o índice e número aleatório
    srand(time(NULL)); // Inicializa o gerador de números aleatórios 

    // Preenche o vetor com números aleatórios
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100; // Gera um número aleatório entre 0 e 99
        vetor[indice] = numeroAleatorio; // Atribui o número aleatório ao vetor
    }

    printf("Vetor original: "); // Imprime o vetor antes da ordenação
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]); 
    }
    printf("\n"); 

    insertionSort(vetor, TAMANHO_VETOR); // Chama a função para ordenar o vetor

    printf("Vetor ordenado: "); // Imprime o vetor ordenado
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]); // Imprime o elemento atual do vetor
    }
    printf("\n"); // Imprime uma nova linha

    return 0; // Retorna 0 ao sistema operacional, indicando que o programa foi executado com sucesso
}