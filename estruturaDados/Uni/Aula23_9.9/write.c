#include <stdio.h>

int main(){
    FILE *arq;
    char nome[10];

    arq = fopen("arquivo.txt", "w");

    if (arq){
        printf("Digite um nome ou 0 para sair: \n");
        fgets(nome,10,stdin); //Standart input
        while (nome[0] != '0'){
            fputs(nome, arq);
            printf("Digite um nome ou 0 para sair: \n");
            fgets(nome, 10, stdin);
        }
    }else{
        printf("Arquivo não existe");
    }

    fclose(arq);
    return 0;
}