#include <stdio.h>
#include <stdlib.h>

void clearScreen(){
    system("cls");
}


int main(void){
    char s[10];

    clearScreen();

    printf("Digite algo (gets):");
    // O gets nao limita a leitura de caracteres pre estabelecida no vetor
    gets(s);
    fflush(stdin);

    puts("Resultado");
    puts(s);
    puts("");

    printf("Digite algo (fgets):");
    // fgets é o mais completo e passa o nome da string, o numero de elementos, e a função stdin
    fgets(s,10, stdin);
    fflush(stdin);

    puts("Resultado:");
    puts(s);

    return 0;
}