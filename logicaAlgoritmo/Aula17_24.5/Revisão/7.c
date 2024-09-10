// Exercício 7: Vetores
// 7 Crie um programa que leia 10 números e armazene-os em um vetor. Em seguida, encontre e imprima o maior e o menor número.

#include <stdio.h>

int main(){
    int i, numeros[10];

    for (i=0;i<10;i++){
        printf("Digite um  numero: ");
        scanf("%d", &numeros[i]);
    }

    int maior = numeros[0];
    int menor = numeros[0];

    for (i=0;i<10;i++){
       if (numeros[i]> maior){
            maior = numeros[i];
       }else if (numeros[i]< menor){
            menor = numeros[i];
       }
    }

    printf("Maior = %d", maior);
    printf("Menor = %d", menor);

    return 0;
}