// Variáveis e Operadores aritméticos Crie um programa que calcule a média aritmética
// de três notas e determine se o aluno está aprovado (média >= 6).

#include <stdio.h>

int main (){
    float notas[3], media;
    int i;

    for (i = 0; i<3;i++){
        printf("Nota %d: ", i+1);
        scanf("%f",&notas[i]);
        media += notas[i];
    }

    if ((media/3) >= 6){
        printf("O aluno foi aprovado com %.2f de media.", media/3);
    }else {
        printf("O aluno foi reprovado com %.2f de media.", media/3);
    }

    return 0;
}