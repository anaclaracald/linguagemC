// Exercício 4: Vetores
// 4 Crie um programa que leia 5 números, armazene-os em um vetor, e em seguida, imprima-os na ordem inversa.


#include <stdio.h>

int numeros[5], i;

int main(){

    for (i=0;i<5; i++){
        printf("Digite o elemento %d do vetor: ", i+1);
        scanf("%d", &numeros[i]);
    }

    for (i=4;i!=0;i--){
        printf("Elemento %d: %d\n", i+1, numeros[i]);
    }

    return 0;       
}