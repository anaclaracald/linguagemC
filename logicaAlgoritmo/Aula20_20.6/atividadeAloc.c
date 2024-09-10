#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct _livro{
    char nomeL[100];
    int numPag;
    float preco;
} Livro;

typedef struct _aluno{
    char nome[100];
    int idade;
    Livro *livroFav;
} Aluno;

Livro *createLivro(char *titulo, int numPag, float preco){
    Livro *livro = calloc(1, sizeof(Livro));
    strcpy(livro->nomeL, titulo);
    livro->numPag = numPag;
    livro->preco = preco; // cadastra o preço na memória que já foi alocada
    return livro; // retorna o endereço de livro
}

Livro *copyLivro(Livro *liv){
    return createLivro(liv->nomeL, liv->numPag, liv->preco);
}

void displayLivro(Livro *liv){
    printf("\nNome do livro: %s\n", liv->nomeL);
    printf("Numero de paginas: %d\n", liv->numPag);
    printf("Preco: R$%.2f\n", liv->preco);
}

void updateLivro(Livro *livroRef, float novoPreco){
    livroRef->preco = novoPreco;
}

void deallocateLivro(Livro **livro_ref){
    Livro *livro = *livro_ref;
    free(livro);
    *livro_ref = NULL;
}

Aluno *createAluno(char *nome, int idade, const Livro *liv){
    Aluno *a = calloc(1, sizeof(Aluno));
    strcpy(a->nome, nome);
    a->idade = idade;
    a->livroFav = copyLivro(liv);
}

void displayAluno(const Aluno *aluno){
    printf("\nNome: %s.\n", aluno->nome);
    printf("Idade: %d.\n", aluno->idade);
    printf("Livro Favorito: %s.\n\n", aluno->livroFav);
}

void deallocateAluno(Aluno **aluno_ref){
    Aluno *aluno = *aluno_ref;
    free(aluno);
    *aluno_ref = NULL;
}

int main(){
    Livro *lordOfTheRing = createLivro("Lord of the rings", 280, 129);
    Livro *caliceDeFogo = createLivro("Calice de Fogo", 300, 70);

    displayLivro(lordOfTheRing);
    displayLivro(caliceDeFogo);

    updateLivro(lordOfTheRing, 400);
    updateLivro(caliceDeFogo, 200);

    puts("\nPrecos atualizados:");

    displayLivro(lordOfTheRing);
    displayLivro(caliceDeFogo);
    
    Aluno *Bob = createAluno("Bob", 30, lordOfTheRing);
    Aluno *Mariana = createAluno("Mariana", 19, caliceDeFogo);
    
    displayAluno(Bob);
    displayAluno(Mariana);
    
    deallocateAluno(&Mariana);
    deallocateAluno(&Bob);
    deallocateLivro(&lordOfTheRing);
    deallocateLivro(&caliceDeFogo);

    return 0;
}