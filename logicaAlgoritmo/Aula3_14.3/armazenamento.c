/*Crie um programa que leia o peso, idade e ano d enascimento de um usuário e incremente 1 paa o peso e 2 para o ano*/

#include <stdio.h>

int main (void) {
    
    int idade;
    float peso;
    int ano;
    
    puts("Digite sua idade");
    scanf("%d", &idade);
    
    puts("Digite seu peso");
    scanf("%f", &peso);
    
    puts("Digite seu ano de nascimento");
    scanf("%d", &ano);
    
    peso ++;
    ano+= 2;
    
    printf("Minha idade é: %d \n", idade); 
    printf("Meu peso é: %.2f \n", peso);
    printf("Meu ano: %d" ,ano);
    
    return 0;
    
}