// 3. **Retornar o maior valor entre dois números:** Crie uma função que receba 2 números e retorne o maior valor.

#include <stdio.h>

int num1,num2;

int lerParametros(){
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);
    return num1, num2;
}

int maiorMenor(num1,num2){
    if (num1>num2){
        return printf("O numero %d e maior que o numero %d", num1, num2);
    }else {
        return printf("O numero %d e maior que o numero %d", num2,num1);
    }
}


int main(){
    lerParametros();
    maiorMenor(num1,num2);
    return 0;
}