#include <stdio.h>

// Solicite ao usuário que insira as notas e os pesos correspondentes, e então calcule a média ponderada.

int main(){

    int numeroDeNotas = 0, i; 
    float somaNotas = 0, nota = 0,somaPesos = 0,peso = 0;

    printf("Quantas notas voce tem para adicionar a media?");
    scanf("%d", &numeroDeNotas);

    printf("Modelo de nota x");

    for (i = 1; i <= numeroDeNotas; i++){
        printf("\nNota %d: ", i);
        scanf("%f", &nota);
    
        printf("\nPeso da nota %d: ", i);
        scanf("%d", &peso);
        
        somaNotas += (nota*peso);
        somaPesos += peso;
    }

    float media = somaNotas/somaPesos;

    printf("A media ponderada das notas e pesos fornecidos e %2.f", media);

    return 0;

    
}