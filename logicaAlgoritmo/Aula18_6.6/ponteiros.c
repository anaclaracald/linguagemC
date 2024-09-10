#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;
    int c;

    c = a + b;

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p", &c);

    return 0;
}