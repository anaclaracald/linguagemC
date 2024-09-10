// **Exercício 2**: Operações com Structs 
// Objetivo: Definir uma struct para representar um retângulo e uma função que calcula sua área.
// Passos:
// 1 Defina uma struct Retangulo com dois campos: largura e altura (ambos do tipo float).
// 2 Implemente uma função areaRetangulo que recebe um Retangulo e retorna a área.
// 3 No main, crie um retângulo, inicialize seus valores, e chame a função para imprimir a área.

#include <stdio.h>

typedef struct {
    float largura;
    float altura;
}Retangulo;

float areaRetangulo(Retangulo retangulo1){
    return retangulo1.largura*retangulo1.altura;
}

int main(){
    Retangulo retangulo1;
    retangulo1.altura = 5.3;
    retangulo1.largura = 3.5;

    float area = areaRetangulo(retangulo1);

    printf("A area do retangulo de altura %.2f e largura %.2f e de %.2f", retangulo1.altura, retangulo1.largura, area);
    return 0;
}


