#include <stdio.h>
#include <string.h>

#define N 35

int main (){

    char s[N];
    int i;

    printf("Digite um texto: \n");
    fgets(s,35,stdin);
    // tamanho da string
    i = strlen(s);

    printf("\nTamanho do texto: %d\n", i);

    printf("Tamanho de posição em posição:\n");

    for (i= 0; i< strlen(s); i++){
        printf("%c\n", s[i]);
    }

    return 0;
}