#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
    system("cls");
}

int main(void){

    clearScreen();

    char s[10];

    printf("Digite qualquer coisa (scanf tradicional):");
    // esse scanf simples vai ler tudo até o espaço
    scanf("%s", s);
    // fflush "descarrega", limpa  memória para receber o próximo scanf
    fflush(stdin);

    clearScreen();

    printf("Nao aprimorado - Foi digitado: %s\n", s);

    printf("Digite qualquer coisa (scanf aprimorado):");
    // 9 = numero de elementos char sempre colocar tamanho-1 por conta do /0, [^\n] = para não parar de rodar quando tiver um espaço
    scanf("%9[^\n]s", s);
    //sempre adicionar o fflush depois de scanf, fgets, gets
    fflush(stdin);

    printf("Aprimorado - Foi digitado: %s\n", s);

    return 0;

}