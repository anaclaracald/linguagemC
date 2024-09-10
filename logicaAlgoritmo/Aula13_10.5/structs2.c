#include <stdio.h>

struct Char{
    char caractere;
};

typedef struct Char Character;

int main(){
    Character caractere1;

    caractere1.caractere = 'K';

    printf("Caractere: %c", caractere1);

    return 0;
    
}