#include <stdio.h>

int main() {

    int i, soma = 0;
    int elementos[3];

    for (i = 0; i < 2; i++){
        printf("\nDigite o numero %d: ", i+1);
        scanf("%d", &elementos[i]);
        soma += elementos[i];
    }

    printf("\n %d + %d = %d\n\n", elementos[0],elementos[1], soma);

    return 0;
    
}