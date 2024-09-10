#include <stdio.h>

int main(){

    int numeroTermos,i,proximoTermo = 1, termoAnterior = 0, termoAtual = 1;

    printf("Digite o numero de termos para que uma sequencia de Fibonacci seja gerada:");
    scanf("%d", &numeroTermos);

    for (i = 1; i <= numeroTermos; i ++){
        
        printf(" %d -", proximoTermo);
        proximoTermo = termoAnterior + termoAtual;
        termoAnterior = termoAtual;
        termoAtual = proximoTermo;}

    return 0;
}