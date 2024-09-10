#include <stdio.h>

void SystemClear(){
    system("cls");
}

void imprime1(int vetor[], int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d", vetor[i]);
    }
}

void imprime2(int vetor[10], int n){
    int i;
    for (i=0;i<10;i++){
        printf("%d", vetor[i]);
    }
}

void imprime3(int *vetor, int n){
    int i;
    for (i=0;i<n;i++){
        printf("%d", vetor[i]);
    }
}

int main(){

    SystemClear();

    int vetor[5] = {1,2,3,4,5};
    int vetor2[10] = {1,2,3,4,5,6,7,8,9,10};

    puts("\nPrimeiro");
    imprime1(vetor, 5);

    puts("\nSegundo");
    imprime2(vetor2);

    puts("\nTerceiro");
    imprime3(vetor, 5);

    return 0;
}