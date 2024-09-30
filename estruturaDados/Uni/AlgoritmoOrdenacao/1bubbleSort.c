
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

void bubbleSort(int vetor[], int tamanho) {

    int i, j, auxiliar;
    // Esse 'for' faz o maior elemento da parte nao ordenada "flutuar" para o final do vetor
    for (i = 0; i < tamanho - 1; i++) {
        // O segundo loop serve para realizar as comparacoes e trocas dos elementos do vetor 
        for (j = 0; j < tamanho - i - 1; j++) {
            // Se o elemento atual eh maior do que o próximo elemento 
            if (vetor[j] > vetor[j + 1]) {
                // Armazena o elemento j na variavel auxiliar para nao perder seu valor na troca 
                auxiliar = vetor[j];
                // É feita a troca, agora o elemento veto[j] armazena o valor que estava em vetor[j+1]
                vetor[j] = vetor[j + 1];
                //variavel auxiliar passa a ser armazenado no índice a direita do vetor
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

int main() {
    int vetor[TAMANHO_VETOR];
    int indice, numeroAleatorio;
    srand(time(NULL)); 

    // Loop que insere os numeros aleatorios no vetor
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100; 
        vetor[indice] = numeroAleatorio;
    }

    // Imprime o vetor em sua forma original
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    // Chama a funcao Bubble sort para ordenar o vetor
    bubbleSort(vetor, TAMANHO_VETOR);

    // Imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");
    return 0;
}