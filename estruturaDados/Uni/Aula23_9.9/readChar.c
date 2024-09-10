#include <stdio.h>

int main(){
    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r");

    if (arq){
        while((c = getc(arq)) != EOF){ //get char and End Of File
            printf("%c", c);
        }
    }else{
        printf("Arquivo não existe");
    }

    fclose(arq);
    return 0;
}