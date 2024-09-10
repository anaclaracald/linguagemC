// Crie um programa que converta um valor em uma moeda para outra moeda, com base em taxas de conversão fornecidas pelo usuário. 

#include <stdio.h>

int main() {
    float valor, taxaCambio;
    
    // Solicita que o usuário insira o valor a ser convertido e a taxa de câmbio
    printf("Digite o valor a ser convertido: ");
    scanf("%f", &valor);
    
    printf("Digite a taxa de câmbio (da moeda de origem para a moeda de destino): ");
    scanf("%f", &taxaCambio);
    
    // Calcula o valor convertido
    float valorConvertido = valor * taxaCambio;
    
    // Exibe o valor convertido
    printf("Valor convertido: %.2f\n", valorConvertido);
    
    return 0;
}