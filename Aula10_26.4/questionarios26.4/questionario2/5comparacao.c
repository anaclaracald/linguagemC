// 5. **Comparação de strings**:
// Escreva um programa que leia duas strings do usuário e
// compare-as para determinar se são iguais ou diferentes. Exiba
// o resultado da comparação.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char senha[5] ={"hoje"};
    char senhaUser[5];

    printf("Digite a senha: ");
    fgets(senhaUser,5, stdin);

    if (strcmp(senhaUser, senha) == 0){
        printf("A senha esta correta");
    }else{
        printf("A senha esta incorreta");
    }

    return 0;

}