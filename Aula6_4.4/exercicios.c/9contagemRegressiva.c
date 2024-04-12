# include <stdio.h>
# include <unistd.h>

int main (){
    int numero;

    printf("Digite um numero:");
    scanf("%d", &numero);

    while (numero > -1){
        printf("%d\n", numero);
        numero --;
        sleep(1);
    }
    
    return 0;
}