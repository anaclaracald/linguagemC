// Peça ao usuário quantos alunos há na sala. 
// Em seguida, através de um laço while, peça ao usuário para inserir as notas de todos os alunos da sala, um por vez. 
// Por fim, o programa deve calcular e mostrar a média aritmética da turma


# include <stdio.h>

int main(){
    int numeroDeAlunos;
    int contador = 1;
    float resultadoSomaNotas = 0;
    float nota;

    printf("\nMedia de notas de uma sala de aula\n");

    printf("\nDigite o numero de alunos:");
    scanf("%d", &numeroDeAlunos);

    while (numeroDeAlunos >= 1){
        printf("\nNota %d:", contador);
        scanf("%f", &nota);

        resultadoSomaNotas += nota;

        contador++;
        numeroDeAlunos --;
    }

    float media = resultadoSomaNotas/(contador-1);
    printf("\nA media dos alunos dessa sala e de %2.f.\n", media);

    return 0;
    
}