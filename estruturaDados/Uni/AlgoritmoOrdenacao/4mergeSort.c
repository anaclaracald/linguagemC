#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>   

#define TAMANHO_VETOR 6 

// Funcao para mesclar os subarrays
void merge(int vetor[], int inicio, int meio, int fim) {
    int i, j, k; // Declara variaveis para os indices dos subarrays
    int n1 = meio - inicio + 1; // Tamanho do subarray da esquerda
    int n2 = fim - meio; // Tamanho do subarray da direita

    // Cria os subarrays L e R
    int L[n1], R[n2]; 

    // Copia os dados para os subarrays L e R
    for (i = 0; i < n1; i++)
        L[i] = vetor[inicio + i]; // Copia para L
    for (j = 0; j < n2; j++)
        R[j] = vetor[meio + 1 + j]; // Copia para R

    //Inicializa os subarrays
    i = 0; 
    j = 0; 
    k = inicio; // Indice inicial do vetor original

    // Mescla os subarrays de volta no vetor original
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) { // Se o elemento em L for menor ou igual ao elemento em R
            vetor[k] = L[i]; // Coloca o elemento de L no vetor
            i++; 
        } else {
            vetor[k] = R[j]; // Caso contrario, coloca o elemento de R no vetor
            j++; 
        }
        k++;
    }

    // Copia os elementos restantes de L, se houver
    while (i < n1) {
        vetor[k] = L[i]; // Coloca o elemento restante de L no vetor
        i++; 
        k++;
    }

    // Copia os elementos restantes de R, se houver
    while (j < n2) {
        vetor[k] = R[j]; // Coloca o elemento restante de R no vetor
        j++; 
        k++; 
    }
}

void mergeSort(int vetor[], int inicio, int fim) {
    if (inicio < fim) { // Verifica se o vetor tem mais de um elemento
        int meio = inicio + (fim - inicio) / 2; // Calcula o meio do vetor

        // Chama recursivamente a funcao para os dois subarrays
        mergeSort(vetor, inicio, meio); // Ordena o subarray esquerdo
        mergeSort(vetor, meio + 1, fim); // Ordena o subarray direito
        merge(vetor, inicio, meio, fim); // Mescla os subarrays ordenados
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

    mergeSort(vetor, 0, TAMANHO_VETOR - 1); // Chama a função para ordenar o vetor

    // Exibe o vetor ordenado
    printf("Vetor ordenado: "); 
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]); 
    }
    printf("\n"); 

    return 0; 
}
