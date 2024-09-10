#include <stdio.h>

void calculadora(float *valor1, float *valor2, int operacao){
    switch (operacao){
        case 0: 
            printf("O resultado da soma e %.2f\n", (*valor1)+ (*valor2));
            break;
        
        case 1: 
            printf("O resultado da subtracao e %.2f\n", (*valor1)-(*valor2));
            break;
        
        case 2: 
            printf("O resultado da multiplicacao e %.2f/n", (*valor1)*(*valor2));
            break;
        
        case 3: 
            if ((*valor2) == 0){
                printf("O resultado da divisao e 0");
            }else{
                printf("O resultado da divisao e %.2f\n", (*valor1)/(*valor2));
            }
            
            break;
        
        default:
            break;
    }

}

int main(){
    float num1, num2;
    int operacao;

    printf("Digite o numero 1: ");
    scanf("%f", &num1);

    printf("Digite o numero 2: ");
    scanf("%f", &num2);

    printf("Escolha a operacao que quer realizar:\n[0] somar\n[1] subtrair\n[2] multiplicar\n[3] dividir\n");
    scanf("%d", &operacao);

    calculadora(&num1, &num2, operacao);

    return 0;
}