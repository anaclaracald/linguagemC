#include <stdio.h> 

int main(){
	int a, b, *p1, *p2;
    puts("");

    printf("&a = %p | a = %d\n", &a, a);
    printf("&b = %p | b = %d\n", &b, b);
    printf("&p1 = %p | p1 = %p\n", &p1, p1);
    printf("&p2 = %p | p2 = %p\n", &p2, p2);
    printf("&p1 = %p | *p1 = %d\n", &p1, *p1);
    printf("&p2 = %p | *p2 = %d\n", &p2, *p2);
	
	a = 4;
	b = 3;
	p1 = &a;
	p2 = p1;
	*p2 = *p1 + 3;
	b = b * (*p1);
	(*p2)++;
	p1 = &b;

    puts("");

    printf("&a = %p | a = %d\n", &a, a);
    printf("&b = %p | b = %d\n", &b, b);
    printf("&p1 = %p | p1 = %p\n", &p1, p1);
    printf("&p2 = %p | p2 = %p\n", &p2, p2);
    printf("&p1 = %p | *p1 = %d\n", &p1, *p1);
    printf("&p2 = %p | *p2 = %d\n", &p2, *p2);
	
	return 0;
}