// 2. **Média de Notas:**
// Crie um programa que leia as notas de um aluno em  várias disciplinas (por exemplo, matemática, ciências, história) e 
//calcule a média das notas.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    int i, soma = 0;
    float notas[3];
    char materias[3][12] = {"Matematica", "Historia", "Ciencias"};

    for (i=0; i < 3;i++){
        printf("\nNota de %s: ", materias[i]);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }
    
    float media = soma/3;
    printf("\nA media das notas de matematica, historia e ciencias e igual a %.2f.\n\n", media);

    return 0;

}