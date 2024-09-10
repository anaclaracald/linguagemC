// 8. **Conversão entre temperaturas Celsius e Fahrenheit:** Crie um aplicativo que permita ao usuário escolher entre entrar com a
// temperatura em Celsius ou Fahrenheit. A conversão é realizada através de um comando `switch`.

#include <stdio.h>

int opcao;
float celsius, fahrenheit;

int lerParametros (){
    printf("\n\nConversor de temperatura");

    printf("\n[1] Celsius -> Fahrenheit");
    printf("\n[2] Fahrenheit -> Celsius");

    printf("\nDigite qual das opcoes voce quer:");
    scanf("%d", &opcao);
    return opcao;
}

void conversor(opcao){
    
    switch (opcao){
        case 1:
            printf("\nDigite o numero de celsius que voce gostaria de converter:");
            scanf("%f", &celsius);

            float fahrenheit = 1.8*celsius + 32;

            printf("%2.f graus Celsius = %2.f graus Fahrenheit\n\n", celsius, fahrenheit);
            break;

        case 2:
            printf("\nDigite o numero de fahrenheit que voce gostaria de converter:");
            scanf("%f", &fahrenheit);

            float celsius = fahrenheit+32/1.8;

            printf("%2.f° Fahrenheit = %2.f° Celsius\n\n", celsius, fahrenheit);
            break;
        
        default:
            printf("Opcao invalida.\n\n");
}}

int main (){
    lerParametros();
    conversor(opcao);
    return 0;
}