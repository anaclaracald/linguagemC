# include <stdio.h>

int main(){

    int numero;

    puts('-'*30);
    puts("Esse programa vai ler um numero e dizer se ele e impar ou par!");

    printf("Digite o numero:");
    scanf("%d", &numero);

    if (numero % 2 == 0){
        printf("Voce digitou o numero %d e ele e par.", numero);
    }else{
        printf("Voce digitou o numero %d e ele e impar.", numero);
    }

    return 0;
}