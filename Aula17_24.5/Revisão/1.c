// Exercício 1: Variáveis e Operações Básicas  Crie um programa que leia dois números
// inteiros, calcule e exiba a soma, subtração, multiplicação e divisão deles.

#include <stdio.h>

int num1, num2;

void operacoes(num1, num2){
    int soma, subtracao, multiplicacao, divisao;

    soma = num1 + num2;
    printf("Soma = %d\n", soma);

    subtracao = num1 - num2;
    printf("Subtracao = %d\n", subtracao);

    multiplicacao = num1*num2;
    printf("Multiplicacao = %d\n", multiplicacao);

    divisao = num1/num2;
    printf("Divisao = %d\n", divisao);
}

int main(){

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num1);
    puts("");

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num2);
    puts("");

    operacoes(num1, num2);

    return 0;
}