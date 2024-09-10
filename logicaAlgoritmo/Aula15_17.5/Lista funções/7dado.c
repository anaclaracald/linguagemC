// 7. **Simular um dado de 6 faces:** Crie uma função chamada `Dado()` que retorne, através de sorteio, um número de 1 até 6.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void dado(void){
    srand(time(NULL));

    int sorteioFace = (rand() %6) +1;
    if (sorteioFace>1){
        printf("A face sorteada foi a que possui %d pontos", sorteioFace);
    }else {
        printf("A face sorteada foi a que possui %d ponto", sorteioFace);
    }

}

int main(){
    dado();
    return 0;
}