#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

// Função Shell Sort
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

// Função para verificar se o valor já existe no vetor
int valorJaExiste(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1; // O valor já existe no vetor
        }
    }
    return 0; // O valor não existe no vetor
}

int main() {
    int vetor[TAMANHO_VETOR];
    int indice, numeroAleatorio;

    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com valores aleatórios e únicos
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        do {
            numeroAleatorio = rand() % 100; // Gera números aleatórios entre 0 e 99
        } while (valorJaExiste(vetor, indice, numeroAleatorio)); // Garante que o número seja único

        vetor[indice] = numeroAleatorio;
    }

    // Exibe o vetor antes da ordenação
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    // Ordena o vetor usando Shell Sort
    shellSort(vetor, TAMANHO_VETOR);

    // Exibe o vetor após a ordenação
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
