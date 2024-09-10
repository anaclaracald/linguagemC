#include <stdio.h>

int main(){
    int *p1, p;

    p = 0;
    p1 = &p;

    printf("%p\n", &p1);
    printf("%d\n", *p1);
    printf("%p\n", p1);

    return 0;
}