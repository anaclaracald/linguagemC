#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

// Função para dividir o vetor e encontrar o pivô
int particionar(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim];
    int i = (inicio - 1);
    int temporario;

    for (int j = inicio; j <= fim - 1; j++) {
        if (vetor[j] < pivo) {
            i++;
            temporario = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temporario;
        }
    }
    temporario = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temporario;
    return (i + 1);
}

// Função Quick Sort
void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) {
        int pi = particionar(vetor, inicio, fim);

        quickSort(vetor, inicio, pi - 1);
        quickSort(vetor, pi + 1, fim);
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

    quickSort(vetor, 0, TAMANHO_VETOR - 1);

    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
