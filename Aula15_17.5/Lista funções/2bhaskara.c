// 2. **Equação do segundo grau:** Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma 
// equação do segundo grau, e retorne o valor do delta, dado por Delta = b^2 - 4ac.

#include <stdio.h>

int numA,numB, numC;

int lerParametros(){
    printf("Digite o coeficiente A:");
    scanf("%d", &numA);

    printf("Digite o coeficiente B:");
    scanf("%d", &numB);

    printf("Digite o coeficiente C:");
    scanf("%d", &numC);
    return numA, numB, numC;
}

int delta(numA,numB, numC){
    int delta = numB*numB-4*numA*numC;
    return printf("%d", delta);
}

int main(){
    lerParametros();
    delta(numA,numB,numC);
    return 0;
}