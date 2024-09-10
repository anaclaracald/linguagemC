#include <stdio.h>

int main(){
    int numeroDoComputador = 9;
    int numeroDoJogador;
    char nome[50];

    printf("Digite seu nome:");
    scanf("%s", nome);

    printf("\nOla, %s! Bem vindo(a) ao jogo de adivinhacao...\nTente adivinhar o numero que o computador armazenou!\n", nome);
    printf("Digite seu palpite, %s:", nome);
    scanf("%d", &numeroDoJogador);

    if(numeroDoComputador == numeroDoJogador){
        printf("Parabens, %s! Voce acertou!\n", nome);
    }
    else if(numeroDoComputador != numeroDoJogador && numeroDoJogador < numeroDoComputador){
        printf("Nao foi dessa vez, %s! O numero e maior, tente novamente...\n", nome);
        printf("Digite seu palpite, %s:", nome);
        scanf("%d", &numeroDoJogador);
        if(numeroDoComputador == numeroDoJogador){
            printf("Parabens, %s! Voce acertou!\n", nome);
        }else{
            printf("Nao foi dessa vez %s:(", nome);
        }
    }
    else if(numeroDoComputador != numeroDoJogador && numeroDoJogador > numeroDoComputador){
        printf("Nao foi dessa vez, %s! O numero e menor, tente novamente...\n", nome);
        printf("Digite seu palpite, %s:", nome);
        scanf("%d", &numeroDoJogador);
        if(numeroDoComputador == numeroDoJogador){
            printf("Parabens, %s! Voce acertou!\n", nome);
        }else{
            printf("Nao foi dessa vez %s:(", nome);
        }
    }

    return 0;
}