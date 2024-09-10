#include <stdio.h>

int main(){

char nome[60];

float nota = 0;

printf("Digite o nome:");

scanf("%s", nome);

printf("\nDigite a nota:");

scanf("%f", &nota);


if(nota < 7){

    printf("\nNome: %s.", nome);

    printf("\nNota: %.2f.", nota);

    printf("\nStatus: REPROVADO. (Nota maior que 7 - Aprovado; Nota menor que 7 - Reprovado).");

}else {

    printf("\nNome: %s.", nome);

    printf("\nNota: %.2f.", nota);

    printf("\nStatus: APROVADO. (Nota maior que 7 - Aprovado; Nota menor que 7 - Reprovado).");

}

return 0;

}