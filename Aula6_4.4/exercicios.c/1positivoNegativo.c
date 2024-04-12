# include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero inteiro:");
    scanf("%d", &numero);

    if (numero >= 1 ){
        printf("Voce digitou o numero %d e ele e positivo.", numero);
    }
    else if (numero == 0){
        printf("Voce digitou o numero %d e ele e nulo.", numero);
    }
    else{
        printf("Voce digitou o numero %d e ele e negativo.", numero);
    }

    return  0;
}