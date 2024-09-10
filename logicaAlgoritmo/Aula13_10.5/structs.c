//Estruturas para criar tipo um array que possa receber vários tipo de dados não somente um como num vetor comum

#include <stdio.h>

struct Ponto{
    int x;
    int y;   
};

int main(){

    //criando instância da struct Ponto
    struct Ponto ponto1;

    //Atribuindo valores
    ponto1.x = 10;
    ponto1.y = 20;

    //Acessando e imprimindo os valores
    printf("Coordenadas: (%d,%d)\n", ponto1.x, ponto1.y);

    return 0;
    
}