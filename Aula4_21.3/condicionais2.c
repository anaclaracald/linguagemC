#include <stdio.h>
#include <time.h>

int main(){
   int idade = 0;

   printf("Digite sua idade:");
   scanf("%d", &idade);

   if(idade >= 0 && idade <= 12){
        printf("Voce e uma  crianca.");
   }
   else if(idade >= 13 && idade <= 17){
        printf("Voce e um adolescente");
   }
   else if(idade >= 18 && idade <= 24){
        printf("Voce e um jovem adulto");
   }
   else{
        printf("Voce e um adulto");
   }

}