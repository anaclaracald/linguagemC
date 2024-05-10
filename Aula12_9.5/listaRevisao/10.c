// Estruturas de Decisão e Operadores Lógicos Implemente um programa que
// determine se um ano é bissexto ou não.

# include <stdio.h>

int main (){

    int ano;
    puts("Esse programa vai ler um ano e dizer se ele e bissexto ou nao.");

    printf("Digite um ano:");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0){
        printf("O ano %d e bissexto.", ano);
    }
    else{
        printf("O ano %d nao e bissexto.", ano);
    }

    return 0;
}