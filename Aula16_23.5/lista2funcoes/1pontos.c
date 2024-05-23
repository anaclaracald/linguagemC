// **Exercício 1**: Definição e Inicialização de Structs
// Objetivo: Definir uma struct para representar um ponto em um plano cartesiano e uma função que recebe um ponto e retorna a distância desse ponto à origem.
// Passos:
// 1 Defina uma struct Ponto com dois campos: x e y (ambos do tipo float).
// 2 Implemente uma função distanciaOrigem que recebe um Ponto e retorna a distância desse ponto à origem (0, 0).
// 3 No main, crie um ponto, inicialize seus valores, e chame a função para imprimir a distância.
#include <stdio.h>
#include <math.h>

typedef struct{
    float x;
    float y;
}Ponto;

float distanciaOrigem(Ponto ponto) {
    return sqrt(ponto.x*ponto.x+ ponto.y*ponto.y);
}

int main (){
    Ponto ponto1;
    ponto1.x = 2;
    ponto1.y = 2;

    float result = distanciaOrigem(ponto1);

    printf("result = %.2f\n", result);
    return 0;
}