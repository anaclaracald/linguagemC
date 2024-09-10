// 1. **Verificar se um valor é nulo:**Crie uma função que receba um valor e informe se ele é positivo ou não.

#include <stdio.h>

int numero;

int lerNumero(){
    printf("Digite um numero: ");
    scanf("%d", &numero);
    return numero;
}

int numeroAnalise(int numero){
    if (numero>0){
        printf("Esse numero e positivo +");
    }else if(numero<0){
        printf("Esse numero e negativo -");
    }else {
        printf("Esse numero e nulo 0");
    }

    return 0;
}

int main(){
    lerNumero();
    numeroAnalise(numero);
    return 0;
}