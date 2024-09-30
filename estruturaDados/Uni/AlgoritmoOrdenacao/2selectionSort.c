#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6

// Função Selection Sort com os parâmetros vetor e seu tamanho
void selectionSort(int vetor[], int tamanho) {
    int i, j, indiceMenor, auxiliar; // declara as variáveis necessárias

    // Percorre o vetor até o penúltimo elemento, pois no fim o último elemento já estará no lugar certo
    for (i = 0; i < tamanho - 1; i++) {
        indiceMenor = i; // Inicializa indiceMenor, assumindo que o menor é a posição atual i

        for (j = i + 1; j < tamanho; j++) {// Encontra o menor elemento no vetor não ordenado
            
            if (vetor[j] < vetor[indiceMenor]) {// verifica qual o menor elemento e passa seu novo índice
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
    // Inicializa o gerador de números aleatórios
    srand(time(NULL));

    // Preenche o vetor com valores aleatórios e únicos
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        numeroAleatorio = rand() % 100; // Gera números aleatórios entre 0 e 99
        vetor[indice] = numeroAleatorio;
    }

    // Exibe o vetor antes da ordenação
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    // Ordena o vetor usando Selection Sort
    selectionSort(vetor, TAMANHO_VETOR);

    // Exibe o vetor após a ordenação
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    return 0;
}
