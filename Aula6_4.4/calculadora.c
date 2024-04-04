# include <stdio.h>

int main(){
    
    int opcao;
    int numero1;
    int numero2; 
    
    printf("Digite a opcao desejada:\n[1]Soma\n[2]Subtracao\n[3]Multiplicacao\n[4]Divisao\n[5]Resto da divisao\n");
    scanf("%d", &opcao);

    printf("Digite o numero 1:");
    scanf("%d", &numero1);

    printf("Digite o numero 2:");
    scanf("%d", &numero2);

    switch(opcao){
        case 1:
            printf("Voce escolheu soma.\n");
            printf("Soma:\n %d + %d = %d", numero1, numero2, numero1+numero2);
            break;
        case 2:
            printf("Voce escolheu subtracao.\n");
            printf("Subtracao:\n %d - %d = %d", numero1, numero2, numero1-numero2);
            break;
        case 3:
            printf("Voce escolheu multiplicacao.\n");
            printf("Multiplicacao:\n %d x %d = %d", numero1, numero2, numero1*numero2);
            break;
        case 4:
            printf("Voce escolheu divisao.\n");
            if(numero2 != 0){
                printf("Divisao:\n %d : %d = %d", numero1, numero2, numero1/numero2);
            }else{
                print('Nao e possivel dividir um numero por 0.');
            }
            break;
        case 5:
            printf("Voce escolheu o resto a divisao.\n");
            printf("Resto da divisao entre %d e %d = %d", numero1, numero2, numero1%numero2);
            break;
        default:
            printf("Opcao invalida :(");
    }

    return 0;
}