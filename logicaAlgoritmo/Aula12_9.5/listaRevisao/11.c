// Switch Case Desenvolva um programa que leia um número de 1 a 7 e imprima o dia
// da semana correspondente, sendo 1 para Domingo.

#include <stdio.h>

int main(){
    int numero;

    printf("Dia da semana :)");

    printf("Digite um numero de 1 ate 7:");
    scanf("%d", &numero);

    switch (numero)
    {
    case 1:
        printf("1 = Domingo");
        break;
    case 2:
        printf("2 = Segunda");
        break;
    case 3:
        printf("3 = Terca");
        break;
    case 4:
        printf("4 = Quarta");
        break;
    case 5:
        printf("5 = Quinta");
        break;
    case 6:
        printf("6 = Sexta");
        break;
    case 7:
        printf("7 = Sabado");
        break;
    default:
        printf("Numero invalido!");
        break;
    }

    return 0;
}