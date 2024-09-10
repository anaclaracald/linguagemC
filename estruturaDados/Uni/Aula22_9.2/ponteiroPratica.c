#include <stdio.h>

void incrementa(int *valor){
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", (*valor));
    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", ++(*valor));
    printf("O endereco de memoria e %p\n", &valor);
}

int main(){
    int cont = 10;
    printf("Antes de incrementar.\n");
    printf("O contador vale %d\n", cont);
    printf("O endereco de memoria e %p\n", &cont);

    incrementa(&cont);

    printf("Depois de incrementar.\n");
    printf("O contador vale %d\n", cont);
    printf("O endereco de memoria e %p\n", &cont);

    return 0;
} 