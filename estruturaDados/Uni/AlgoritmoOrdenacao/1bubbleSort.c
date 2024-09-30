// Importa as bibliotecas necessárias
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Define uma constante para que seja o tamanho do vetor que será ordenado
#define TAMANHO_VETOR 6

// Instancia a função 'Bubble sort' que recebe o parâmetro vetor e seu tamanho 
void bubbleSort(int vetor[], int tamanho) {
    // Declara 3 variáveis i e j para o loop e uma auxiliar para a troca de valores que será feita no vetor
    int i, j, auxiliar;
    // Esse 'for' faz o maior elemento da parte não ordenada "flutuar" para o final do vetor
    for (i = 0; i < tamanho - 1; i++) {
        /*O segundo loop serve para realizar as comparações e trocas dos 
        elementos do vetor , para que no fim o maior valor esteja na posição certa*/ 
        for (j = 0; j < tamanho - i - 1; j++) {
            // Se o elemento atual é maior do que o próximo elemento 
            if (vetor[j] > vetor[j + 1]) {
                /*se a condição for verdadeira ele armazena o elemento j na 
                variável auxiliar para não perder seu valor na troca*/  
                auxiliar = vetor[j];
                // É feita a troca, agora o elemento veto[j] armazena o valor que estava em vetor[j+1]
                vetor[j] = vetor[j + 1];
                /*O valor do elemento que foi armazenado na variável 
                auxiliar passa a ser armazenado no índice a direita do vetor[j], ou vetor[j+1]*/
                vetor[j + 1] = auxiliar;
            }
        }
    }
}

// Essa função verifica se o valor sorteado para preencher o vetor já existe neste vetor
int valorJaExiste(int vetor[], int tamanho, int valor) {
    for (int i = 0; i < tamanho; i++) {
        if (vetor[i] == valor) {
            return 1;
        }
    }
    return 0; 
}

int main() {
    int vetor[TAMANHO_VETOR];// Inicializa o vetor com o tamanho da constante definida anteriormente
    int indice, numeroAleatorio; // Inicializa as variáveis
    srand(time(NULL)); // Inicializa o sorteador de números aleatórios

    // Loop que insere os números aleatórios no vetor
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        do {
            numeroAleatorio = rand() % 100; 
        } while (valorJaExiste(vetor, indice, numeroAleatorio)); 
        vetor[indice] = numeroAleatorio;
    }

    // Imprime o vetor em sua forma original
    printf("Vetor original: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");

    // Chama a função Bubble sort para ordenar o vetor
    bubbleSort(vetor, TAMANHO_VETOR);

    // Imprime o vetor ordenado
    printf("Vetor ordenado: ");
    for (indice = 0; indice < TAMANHO_VETOR; indice++) {
        printf("%d ", vetor[indice]);
    }
    printf("\n");
    return 0;
}