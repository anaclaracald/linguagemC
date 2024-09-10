#include <stdio.h>

int main() {
    int numero = 1;
    int i;

    printf("\nVamos identificar se um numero e primo ou nao.");
    printf("\nDigite um numero inteiro:");
    scanf("%d", &numero);

    if (numero <= 1){
        printf("Esse numero nao e primo!");
    }
    else { 
        for(i=2; i < numero; i++) {
            if(numero%i == 0){
                printf("Esse numero nao e primo!");
                break;
            }
        }
        if (numero = i){
            printf("Esse numero e primo!");
        }
    }

    return 0;

}