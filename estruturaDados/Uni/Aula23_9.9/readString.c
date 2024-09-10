#include <stdio.h>

int main(){
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo.txt", "r");

    if (arq){
        while(!feof(arq)){ //File End Of File   
            fgets(nome, 10, arq);
            if (resultado){
                printf("%s", nome);
            }        
        }
    }else{
        printf("Arquivo não existe");
    }

    fclose(arq);
    return 0;
}