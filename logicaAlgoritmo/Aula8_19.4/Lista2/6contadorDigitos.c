#include <stdio.h>

int main() {
    int numero, contador = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Verifica se o número é negativo e o converte para positivo
    if (numero < 0) {
        numero *= -1;
    }

    // incrementa um cada vez que ele é dividido por 10 até que o resultado seja 0
    do {
        numero /= 10;
        contador++;
    } while (numero != 0);

    printf("O numero tem %d digitos.\n", contador);

    return 0;
}