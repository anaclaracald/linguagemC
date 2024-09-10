// Um ponteiro nada mais é que uma variável que guarda o endereço de outra variável
// Ponteiro 8 bytes

#include <stdio.h>

int main(){
    int a = 10;
    int *p1 = NULL;
    int *p2;

    printf("&a = %d | a = %d", &a, a);
    printf("*p1")

    p1 = &a;
    p2 = p1;
    *p2 = 4;

    return 0;
}