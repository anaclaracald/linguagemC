// 5. **Retornar o maior valor entre 3números:*Crie uma função que receba 3 números
// e retorne o maior valor, utilizando a função da questão 4.

#include <stdio.h>

int num1,num2,num3;

int lerParametros(){
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    printf("Digite outro numero: ");
    scanf("%d", &num3);
    return num1,num2,num3;
}

int maiorMenor(num1,num2,num3){
    if (num1>num2 && num1>num3){
        return printf("O numero %d e maior que o numero %d e do que o numero %d", num1, num2, num3);
    }else if (num2>num1 && num2>num3){
        return printf("O numero %d e maior que o numero %d e do que o numero %d", num2,num1,num3);
    }else {
        return printf("O numero %d e maior que o numero %d e do que o numero %d", num3, num1,num3);
    }
}


int main(){
    lerParametros();
    maiorMenor(num1,num2,num3);
    return 0;
}