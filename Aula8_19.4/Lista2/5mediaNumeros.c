//Escreva um programa que solicite ao usuário quantos números ele deseja inserir e depois calcule a média desses números

#include <stdio.h>

int main() {

    float quantidadeNumeros = 0, numero = 0, somaNum = 0;
    int i = 0;

    printf("\nCalculadora de medias:");

    printf("\nQuantos numeros voce ira adicionar a media? ");
    scanf("%f", &quantidadeNumeros);

    for (i= 1; i <= quantidadeNumeros; i ++){
        printf("\nNumero %d: ", i);
        scanf("%f", &numero);

        somaNum += numero;
    }

    float media = somaNum/quantidadeNumeros;
    printf("\nA media dos numeros e %2.f", media);

    return 0;

}