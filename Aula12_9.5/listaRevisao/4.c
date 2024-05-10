#include <stdio.h>

int main() {
    int vetor[2];
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar elemento\n");
        printf("2. Somar elementos\n");
        printf("3. Subtrair elementos\n");
        printf("4. Multiplicar elementos\n");
        printf("5. Dividir elementos\n");
        printf("6. Exibir vetor atual\n");
        printf("7. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o primeiro elemento: ");
                scanf("%d", &vetor[0]);
                printf("Digite o segundo elemento: ");
                scanf("%d", &vetor[1]);
                printf("Elementos adicionados com sucesso!\n");
                break;
            case 2:
                printf("A soma dos elementos do vetor é: %d\n", vetor[0] + vetor[1]);
                break;
            case 3:
                printf("A subtração dos elementos do vetor é: %d\n", vetor[0] - vetor[1]);
                break;
            case 4:
                printf("A multiplicação dos elementos do vetor é: %d\n", vetor[0] * vetor[1]);
                break;
            case 5:
                if (vetor[1] != 0) {
                    printf("A divisão dos elementos do vetor é: %.2f\n", (float)vetor[0] / vetor[1]);
                } else {
                    printf("Não é possível dividir por zero.\n");
                }
                break;
            case 6:
                printf("Vetor atual: %d %d\n", vetor[0], vetor[1]);
                break;
            case 7:
                printf("Saindo do programa. Até mais!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 7);

    return 0;
}