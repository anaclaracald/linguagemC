#include <stdio.h>
#include <string.h>

#define N 5

int main (){

    char hardText[N] = {"hoje"};
    char senhaUsr[N];
    int ok;

    printf("Digite uma senha:\n");
    fgets(senhaUsr, N, stdin);

    // comparar se são exatamente iguais se hardtext == senhaUser imprime 0
    ok = strcmp(hardText, senhaUsr);

    // 0 = true

    if (ok == 0){
        printf("Senha correta");
    }else if (ok != 0){
        printf("Senha incorreta");
    }

    return 0;
}

