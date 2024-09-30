#include <stdio.h>
#include <stdlib.h>

int fatorial(int n);

int main(){
    int n;

    printf("Digite um valor maior que zero: ");
    scanf("%d", &n);

    printf("Fatorial de %d: %d\n", n, fatorial(n));
    return 0;
}

int fatorial(int n){
    // Cria-se o break para sair do loop infinito
    if(n == 0 || n == 1)
        return 1;
    else{
        return fatorial(n-1)*n;// ele roda isso até chegar no caso base
    }
}