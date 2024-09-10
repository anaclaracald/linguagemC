// Peça ao usuário para inserir uma base e um expoente, e calcule a potência correspondente. 

#include <stdio.h>

int main() {

    int i, base = 0, expoente = 0, potencia;

    printf("\nCalculadora de potencias :)\n");

    printf("\nQual a base? ");
    scanf("%d", &base);

    printf("\nQual o expoente?");
    scanf("%d",&expoente);

    // inicializar as variaveis da maneira correta antes de rodar o loop
    potencia = 1;

    // nesse caso o i tinha que ser iniciado em 0 
    for (i = 0; i < expoente; i++){
        potencia *= base;
    }
    
    printf("\nBase = %d\nExpoente = %d\nPotencia = %d\n\n", base, expoente, potencia);

    return 0;
}