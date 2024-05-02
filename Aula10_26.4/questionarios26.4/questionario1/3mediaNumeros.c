// 3. **Média de Números em um Vetor:**
// Crie um programa que calcule a média dos números em um vetor de inteiros.

#include <stdio.h>

int main() {
    
    int i,quantidade; 
    int soma = 0;

    printf("\nVoce quer a media de quantos numeros?");
    scanf("%d", &quantidade);

    int elementos[quantidade];

    for (i=0;i<quantidade;i++){
        printf("\nDigite o numero %d:", i+1);
        scanf("%d", &elementos[i]);
        soma += elementos[i];
    }

    int media = soma/quantidade;

    printf("\nSoma dos numeros = %d", soma);
    printf("\nMedia dos numeros =%d", media);
    
    return 0;

}