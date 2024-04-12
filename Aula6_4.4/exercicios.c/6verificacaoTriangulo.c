# include <stdio.h>

int main(){
    float lado1, lado2, lado3;

    printf("\nVerifique se um triangulo e valido");

    printf("\nLado 1:");
    scanf("%f", &lado1);

    printf("\nLado 2:");
    scanf("%f", &lado2);

    printf("\nLado 3:");
    scanf("%f", &lado3);

    if (lado1 + lado2 > lado3 && lado2 + lado3 > lado1 && lado3 + lado1 > lado2){
        printf("\nEsse triangulo e valido.");
    }else {
        printf("\nEsse triangulo nao e valido.");
    }

    return 0;
}