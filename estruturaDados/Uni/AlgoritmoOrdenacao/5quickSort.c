#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAMANHO_VETOR 6 

// Funcao para dividir o vetor e encontrar o pivo
int particionar(int vetor[], int inicio, int fim) {
    int pivo = vetor[fim]; // O pivo eh o ultimo elemento do vetor
    int i = (inicio - 1); // Inicializa o indice do menor elemento
    int temporario; // Variavel temporaria para troca de elementos

    // Loop para comparar cada elemento com o pivo
    for (int j = inicio; j <= fim - 1; j++) {
        
        if (vetor[j] < pivo) {
            i++; // Incrementa o indice do menor elemento
            // Troca o elemento atual com o elemento na posicao i
            temporario = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = temporario;
        }
    }
    // Troca o pivo para sua posicao correta
    temporario = vetor[i + 1];
    vetor[i + 1] = vetor[fim];
    vetor[fim] = temporario;
    // Retorna a posição do pivo
    return (i + 1);
}

void quickSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) { // Verifica se o vetor tem mais de um elemento
        // Particiona o vetor e obtem a posicao do pivo
        int pi = particionar(vetor, inicio, fim);

        // Recursivamente ordena os elementos antes e depois do pivô
        quickSort(vetor, inicio, pi - 1);
        quickSort(vetor, pi + 1, fim);
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

    // Exibe o vetor original
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    clock_t inicio = clock();

    // Chama a função Quick Sort para ordenar o vetor
    quickSort(vetor, 0, TAMANHO_VETOR - 1);

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
