//todas as variáveis são alocadas na Stack da memoria ram
//malloc não inicializa = inicia no lixo
//calloc inicia com 0
//free liberar a memoria 

#include <stdio.h>
#include <stdlib.h>

void imprimirVetorPonteiro (int *vetor, int tamanho){
    for (int i=0; i<tamanho;i++){
        printf("%d", vetor[i]);
    }
    printf("\n");
}

int main(){
    int vetor[] = {1,2,3,4,5};
    int tamanho = sizeof(vetor)/sizeof(vetor[0]);

    imprimirVetorPonteiro(vetor,tamanho);

    return 0;
}