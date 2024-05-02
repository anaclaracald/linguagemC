#include <stdio.h>
#include <string.h>

#define N 50

int main (){

    char parte1[N] = {"Lógica de"};
    char parte2[N] = {"programação"};

    printf("Antes do strcat:\n");
    printf("str1: %s\n", parte1);
    printf("str2: %s\n", parte2);

    // juntar duas strings
    strcat(parte1, parte2);

    printf("Depois do strcat:\n");
    puts(parte1);
    puts(parte2);

    return 0;
}