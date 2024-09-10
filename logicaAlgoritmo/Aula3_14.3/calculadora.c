# include <stdio.h>

int main(void){
    
    int numero1 = 0;
    int numero2 = 0;

    printf("Digite dois numeros para a soma, subtracao, divisao e multiplicacao\n");

    printf("Primeiro numero:\n");
    scanf("%d", &numero1);

    printf("Segundo  numero:\n");
    scanf("%d", &numero2);

    printf("Soma: %d\n", numero1 + numero2);
    printf("Subtracao: %d\n", numero1 - numero2);
    printf("Divisao: %d\n", numero1/numero2);
    printf("Multiplicao: %d\n", numero1 *numero2);
    printf("Resto da divisao: %d\n", numero1%numero2);


    return 0;
    
}