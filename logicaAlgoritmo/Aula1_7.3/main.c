# include <stdio.h>

int main(void){
// nome, peso, genero
    printf("\nNome: %s\n", "Ana Clara");
    // %f para floats e %.<num>f para incluir o número de casas decimais
    printf("Peso: %.2f\n", 55.0);
    // %c para pequenas strings
    printf("Genero: %c\n", 'F');
    // %d para números inteiros
    printf("Ano de nascimento: %d.\n", 2006);
    // %s para string
    printf("Frase: %s\n\n", "Eu sou uma desenvolvedora de sucesso!");

  }