#include <stdio.h>

int main (){

    int notas[5] = {9,9,9,9,9};
    int i = 0;
    float media = 0;

    for (i = 0; i < 5; i++){
        media += notas[i];
    }

    printf("Soma das notas: %.2f\n", media);
    printf("Media: %.2f\n", media/5);
    
    return 0;
}