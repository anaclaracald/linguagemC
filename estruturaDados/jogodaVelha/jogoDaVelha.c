#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int l,c, linha, coluna, jogador , ganhou , jogadas ,opcao ;
    char jogo[3][3];

    do{
        jogador = 1;
        ganhou = 0;
        jogadas = 0;

        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                jogo[i][j] = ' ';
            }
        }

        do{ 
            
            printf("\n\n\t 0   1   2\n\n");
            for (l = 0; l<3; l++){
                for (c = 0;c<3; c++){
                    if(c == 0){
                        printf("\t");
                    }
                    printf(" %c ",jogo[l][c]);
                    if (c<2){
                        printf("|");
                    }
                    if (c==2){
                        printf("   %d", l);
                    }
                }
                if(l<2){
                    printf("\n\t-----------\n");
                } 
                else if(l==2){
                    printf("\n\n\n");
                }
            }

            do{
                printf("JOGADOR %d: \nDigite a coluna que deseja jogar:", jogador);
                scanf("%d",&coluna);
                printf("Digite a linha que deseja jogar:", jogador);
                scanf("%d",&linha);

            } while (linha< 0 || coluna <0 || linha>2 || coluna>2 || jogo[linha][coluna] != ' ');

            if (jogador == 1){
                jogo[linha][coluna] = 'O';
                jogador++;
            }else{
                jogo[linha][coluna] = 'X';
                jogador = 1;
            }

            if( (jogo[0][0]=='O' && jogo[0][1]=='O' && jogo[0][2]=='O')||
                (jogo[1][0]=='O' && jogo[1][1]=='O' && jogo[1][2]=='O')||
                (jogo[2][0]=='O' && jogo[2][1]=='O' && jogo[2][2]=='O')||
                (jogo[0][0]=='O' && jogo[1][0]=='O' && jogo[2][0]=='O')||
                (jogo[0][1]=='O' && jogo[1][1]=='O' && jogo[2][1]=='O')||
                (jogo[0][2]=='O' && jogo[1][2]=='O' && jogo[2][2]=='O')||
                (jogo[0][0]=='O' && jogo[1][1]=='O' && jogo[2][2]=='O')||
                (jogo[0][2]=='O'&& jogo[1][1]=='O'&& jogo[2][0]=='O')){
                printf("\nParabens!! O jogador 1 venceu ;)\n");
                ganhou = 1;
                printf("\n\n\t 0   1   2\n\n");
                for (l = 0; l<3; l++){
                for (c = 0;c<3; c++){
                    if(c == 0){
                        printf("\t");
                    }
                    printf(" %c ",jogo[l][c]);
                    if (c<2){
                        printf("|");
                    }
                    if (c==2){
                        printf("   %d", l);
                    }
                }
                if(l<2){
                    printf("\n\t-----------\n");
                } 
                else if(l==2){
                    printf("\n\n\n");
                }
            }
                break;
            }

            if( (jogo[0][0]=='X' && jogo[0][1]=='X' && jogo[0][2]=='X')||
                (jogo[1][0]=='X' && jogo[1][1]=='X' && jogo[1][2]=='X')||
                (jogo[2][0]=='X' && jogo[2][1]=='X' && jogo[2][2]=='X')||
                (jogo[0][0]=='X' && jogo[1][0]=='X' && jogo[2][0]=='X')||
                (jogo[0][1]=='X' && jogo[1][1]=='X' && jogo[2][1]=='X')||
                (jogo[0][2]=='X' && jogo[1][2]=='X' && jogo[2][2]=='X')||
                (jogo[0][0]=='X' && jogo[1][1]=='X' && jogo[2][2]=='X')||
                (jogo[0][2]=='X'&& jogo[1][1]=='X'&& jogo[2][0]=='X')){
                printf("\nParabens!! O jogador 2 venceu ;)\n");
                ganhou = 1;
                printf("\n\n\t 0   1   2\n\n");
                for (l = 0; l<3; l++){
                for (c = 0;c<3; c++){
                    if(c == 0){
                        printf("\t");
                    }
                    printf(" %c ",jogo[l][c]);
                    if (c<2){
                        printf("|");
                    }
                    if (c==2){
                        printf("   %d", l);
                    }
                }
                if(l<2){
                    printf("\n\t-----------\n");
                } 
                else if(l==2){
                    printf("\n\n\n");
                }
            }
                break;
            }

        }while(ganhou==0 || jogadas < 9);

        if (ganhou == 0){
            printf("O jogo empatou :(");
        }

        printf("\nDigite 1 para jogar novamente:");
        scanf("%d", &opcao);
        fflush(stdin);

    }while (opcao==1);

    printf("FIM do programa");
    
    return 0;
};