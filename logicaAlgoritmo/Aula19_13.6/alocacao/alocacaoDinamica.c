#include <stdio.h>
#include <stdlib.h>

int tamanho;

void imprimirVetorPonteiro (int *vetor, int tamanho){
    for (int i=0; i<tamanho;i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
}

void imprimirVetorArray (int vetor[], int tamanho){
    for (int i=0; i<tamanho;i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
}

int main(){
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    //alocação dinâmica de memória para o vetor
    int *vetor = malloc(tamanho * sizeof(int));

    //preenchendo o vetor com alguns valores
    for (int i = 0; i<tamanho; i++){
        vetor[i]= i+1;
    }

    //imprimindo o vetor usando as duas funções
    printf("Usando a função que recebe um ponteiro:\n");
    imprimirVetorPonteiro(vetor, tamanho);

    printf("Usando a função que recebe um vetor via colchetes []: \n");
    imprimirVetorArray(vetor, tamanho);

    //liberando a memória
    free(vetor);
    
    return 0;
}