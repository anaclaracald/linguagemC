    // 3. **Contagem de caracteres em uma string**:
    // Escreva um programa que leia uma string do usuário e conte
    // quantos caracteres a string possui, excluindo o caractere nulo
    // de terminação '\0'. Em seguida, exiba o resultado.

    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>

    int main(){

        char string[15];
        int tamanho;

        puts("Digite algo com ate 14 caracteres:");
        fgets(string, 15, stdin);

        tamanho = strlen(string);

        printf("Numero de caracteres: %d",tamanho-1);

        return 0;

    }