# include <stdio.h>

int main () {
    float celsius;
    float fahrenheit;
    int opcao;


    printf("Conversor de temperatura");

    printf("\n[1] Celsius -> Fahrenheit");
    printf("\n[2] Fahrenheit -> Celsius");

    printf("\nDigite qual das opcoes voce quer:");
    scanf("%d", &opcao);

switch (opcao){
    case 1:
        printf("\nDigite o numero de celsius que voce gostaria de converter:");
        scanf("%f", &celsius);

        float fahrenheit = 1.8*celsius + 32;

        printf("%2.f graus Celsius = %2.f graus Fahrenheit", celsius, fahrenheit);
        break;

    case 2:
        printf("\nDigite o numero de fahrenheit que voce gostaria de converter:");
        scanf("%f", &fahrenheit);

        float celsius = fahrenheit+32/1.8;

        printf("%2.f° Fahrenheit = %2.f° Celsius", celsius, fahrenheit);
        break;
        
    default:
        printf("Opcao invalida.");
}
  
    return 0;
}