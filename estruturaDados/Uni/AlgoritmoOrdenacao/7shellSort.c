#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

void shellSort(int vetor[], int tamanho) {
    for (int gap = tamanho / 2; gap > 0; gap /= 2) {
        for (int i = gap; i < tamanho; i++) {
            int temporario = vetor[i];
            int j;
            for (j = i; j >= gap && vetor[j - gap] > temporario; j -= gap) {
                vetor[j] = vetor[j - gap];
            }
            vetor[j] = temporario;
        }
    }
}

int main() {
    int vetor[TAMANHO_VETOR];
    int indice, numeroAleatorio;
    srand(time(NULL));

    // Preenche o vetor com valores aleatórios e únicos
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100; 
        vetor[indice] = numeroAleatorio;
    }

    // Exibe o vetor antes da ordenação
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    clock_t inicio = clock();

    // Ordena o vetor usando Shell Sort
    shellSort(vetor, TAMANHO_VETOR);

    clock_t fim = clock();
    double tempo_execucao = (double)(fim - inicio) / CLOCKS_PER_SEC;

    // Imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");
    
    // Exibe o tempo de execução
    printf("Tempo de execução: %.6f segundos\n", tempo_execucao);
    return 0;
}
