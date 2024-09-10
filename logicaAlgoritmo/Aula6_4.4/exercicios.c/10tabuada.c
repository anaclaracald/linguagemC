# include <stdio.h>

int main(){
     
    int numero;
    int contador = 1;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Tabuada do %d", numero);

    while (contador < 11){
        printf("\n%d x %d = %d", contador, numero, contador*numero);
        contador ++;

    }

    return 0;
    
}