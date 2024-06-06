// Exercício 6: Laços de Repetição e Decisão
// 6 Crie um programa que leia 10 números e conte quantos são pares e quantos são ímpares.

#include <stdio.h>

int main(){
    int i, somaPares = 0, somaImpares = 0;
    int numeros[10];

    for (i=0;i<10;i++){
        printf("Digite o numero: ");
        scanf("%d", &numeros[i]);
    }

    for (i=0;i<10;i++){
        if ((numeros[i]%2) == 0){
            somaPares += 1;
        }else {
            somaImpares += 1;
        }
    }

    printf("\nQuantidade de numeros pares: %d", somaPares);
    printf("\nQuantidade de numeros impares: %d", somaImpares);

    return 0;
}