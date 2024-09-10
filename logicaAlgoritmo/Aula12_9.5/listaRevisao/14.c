# include <stdio.h>

int main(){
     
    int numero;
    int contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Tabuada do %d", numero);

    for (contador=1;contador<11;contador++){
        printf("\n%d x %d = %d", contador, numero, contador*numero);
    }

    return 0;
}