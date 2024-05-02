#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(){

    char respostasUser[8][1];
    char gabarito[8][2] = {"a","d","b","b","c","c","b"};
    int i, corretas = 0, incorretas = 0;

    puts("Revisão for");
    // Questão 1
    printf("\nQuestão 1: Qual é a sintaxe correta para declarar uma variavel inteira em C?\n");
    printf("a) int x;\nb) var x;\nc) integer x;\nd) numero x;\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[0]);
   
    // Questão 2
    printf("\nQuestão 2: Qual é a função usada para imprimir no console em C?\n");
    printf("a) print();\nb) console.log();\nc) printtext();\nd) printf();\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[1]);

    //Questão 3
    printf("\nQuestão 3: O que o operador '==' faz em C?\n");
    printf("a) Atribui um valor a uma variável.\nb) Compara dois valores.\nc) Divide dois valores.\nd) Multiplica dois valores.\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[2]);

    // Questão 4
    printf("\nQuestão 4: Qual é o operador lógico para 'OU' em C?\n");
    printf("a) &&\nb) ||\nc) !\nd) <>\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[3]);

    // Questão 5
    printf("\nQuestão 5: Qual é a estrutura de controle usada para repetição em C?\n");
    printf("a) if\nb) switch\nc) for\nd) else\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[4]);

    // Questão 6
    printf("\nQuestão 6: Qual é a função usada para ler um número inteiro do teclado em C?\n");
    printf("a) read_integer();\nb) input_int();\nc) scanf();\nd) get_int();\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[5]);

    // Questão 7
    printf("\nQuestão 7: Qual é o valor da expressão 5 + 3 * 2 em C?\n");
    printf("a) 16\nb) 11\nc) 13\nd) 10\n");
    printf("Resposta: ");
    scanf("%1s", respostasUser[6]);

    for (i = 0; i<7;i++){
        char respostaUserLower = tolower(respostasUser[i][0]);
        if (respostaUserLower == gabarito[i][0]){
            printf("%d: correta\n", i+1);
            corretas ++;} 
        else {
            printf("%d: incorreta. O gabarito era %s\n", i+1 ,gabarito[i]);
            incorretas ++;}
    }
     
    printf("\n\nCorretas: %d\nIncorretas: %d\n\n", corretas, incorretas);

    return 0;

}