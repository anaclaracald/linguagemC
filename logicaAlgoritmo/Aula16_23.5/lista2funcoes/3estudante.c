// **Exercício 3**: Manipulação de Arrays de Structs
// Objetivo: Definir uma struct para representar um estudante e uma função que calcula a média de suas notas.
// Passos:
// 1 Defina uma struct Estudante com um campo nome (string de até 50 caracteres) e um array de 3 floats para as notas.
// 2 Implemente uma função mediaNotas que recebe um Estudante e retorna a média de suas notas.
// 3 No main, crie um estudante, inicialize suas notas, e chame a função para imprimir a média.
 
 #include <stdio.h>
 #include <string.h>

 typedef struct {
    char nome[50];
    float notas[3];
 }Aluno;

 float mediaNotas(Aluno aluno1){
   float soma = 0;

   for (int i=0; i<3; i++){
      printf("Digite a nota %d: ", i+1);
      scanf("%f", &aluno1.notas[i]);
      soma += aluno1.notas[i];
   }
   float media = soma/3;
   return media;
 }

 int main(){
   Aluno aluno1;

   strcpy(aluno1.nome, "Ana");

   float media = mediaNotas(aluno1);

   printf("A media de %s e %.2f", aluno1.nome, media);
   return 0;
}