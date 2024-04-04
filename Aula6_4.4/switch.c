# include <stdio.h>

int main (){

    int opcao;
    printf("Digite a opcao desejada:\n[1]Soma\n[2]Subtracao\n[3]Multiplicacao\n");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Voce escolheu soma.");
            break;
        case 2:
            printf("Voce escolheu subtracao.");
            break;
        case 3:
            printf("Voce escolheu multiplicacao.");
            break;
        default:
            printf("opcao invalida :(");
    }

    return 0;
}