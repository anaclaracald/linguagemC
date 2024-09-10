# include <stdio.h>

int main(){

    int numero1;
    int numero2;
    int numero3;

    printf("\nESSE PROGRAMA VAI LER TRES NUMEROS E INFORMAR QUAL O MAIOR ENTRE ELES.\n");

    printf("Digite o numero 1:");
    scanf("%d", &numero1);

    printf("Digite o numero 2:");
    scanf("%d", &numero2);

    printf("Digite o numero 3:");
    scanf("%d", &numero3);

    printf("Numero 1 = %d       Numero 2 = %d       Numero 3 = %d\n", numero1, numero2, numero3);

    if(numero1 == numero2 || numero1== numero3){
        printf("\nOs numeros sao iguais.");
    }else if (numero1 > numero2 && numero1 > numero3){
        printf("\nO numero %d e o maior numero.", numero1);
    }else if (numero2 > numero3 && numero2 > numero1){
        printf("\nO numero %d e o maior numero.", numero2);
    }else{
        printf("\nO numero %d e o maior numero.", numero3);
    }

    return 0;
    
}