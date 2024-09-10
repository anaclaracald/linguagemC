#include <stdio.h>
#include <stflib.h>
#include <time.h>

int main(){
    srand(time(NULL));

    int numeroAleatorio = rand() % 10 + 1;
    int num = 0;

    printf("Seja bem vindo ao jogo");

    do{
        printf("\nTente adivinhar o numero:");
        scanf("%d", &num);
        printf("\nErrou voce perdeu o jogo");
    }
    while (num!= numeroAleatorio);
    
    return 0;
}

