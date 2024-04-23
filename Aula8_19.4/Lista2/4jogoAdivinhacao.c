//Implemente um jogo de adivinhação onde o programa gera um número aleatório e o usuário tenta adivinhar. O programa deve dar dicas se o número fornecido pelo
//usuario é maior ou menor do que o número gerado.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int numAleatorioMaquina = rand () % 15+1;
    int numAleatorioJogador = 0, i;

    printf("\nJogo de adivinhacao :)");
    printf("\nO computador ira sortear um numero de 1 a 15 e voce tera que adivinhar qual foi :) Boa sorte ");

    printf("\nDigite seu palpite: ");
    scanf("%d", &numAleatorioJogador);

    for (i = 1;;i++){

        if (numAleatorioJogador > numAleatorioMaquina){
            printf("\nVoce chutou muito alto!");
            printf("\nDigite seu palpite: ");
            scanf("%d", &numAleatorioJogador);

        }else if(numAleatorioJogador < numAleatorioMaquina){
            printf("\nVoce chutou muito baixo");
            printf("\nDigite seu palpite: ");
            scanf("%d", &numAleatorioJogador);
            
        }else{
            printf("\nParabens! Voce acertou com %d tentativas, o numero era %d :)", i, numAleatorioJogador);
            break;
        }
    }

    
        
    return 0;
}