#include <stdio.h>

int main(void){
    int i;
    int v[5];

    for(i=0;i<5;i++){
        scanf("%d", &v[i]);
    }

    // ele invade o endereço alheio que não existe no vetor e gera lixo
    for(i=0;i<=5;i++){
        printf("&v[%d] = %p, v[%d] = %d\n", i, &v[i], i, v[i]);
    }

    return 0;
}