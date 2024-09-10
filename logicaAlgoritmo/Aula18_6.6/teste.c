#include <stdio.h> 

int main(){
	

    // printf("&a = %p | a = %d\n", &a, a);
    // printf("&b = %p | b = %d\n", &b, b);
    // printf("&p1 = %p | p1 = %p\n", &p1, p1);
    // printf("&p2 = %p | p2 = %p\n", &p2, p2);
    // printf("&p1 = %p | *p1 = %d\n", &p1, *p1);
    // printf("&p2 = %p | *p2 = %d\n", &p2, *p2);
	  
      
	int x, y, *ptr1, *ptr2;  
	x = 10;  
	y = 5;  
	ptr1 = &x;  
	ptr2 = &y;  
	*ptr1 = *ptr1 + *ptr2;  
	y = *ptr1 - *ptr2;  
	ptr2 = ptr1;  
	(*ptr2)--;  
	*ptr1 = *ptr1 + 3;   

    puts("");

    printf("&a = %p | a = %d\n", &x, x);
    printf("&b = %p | b = %d\n", &y, y);
    //printf("&c = %p | c= %d\n", &c, c);
    printf("&p1 = %p | p1 = %p\n", &ptr1, ptr1);
    printf("&p2 = %p | p2 = %p\n", &ptr2, ptr2);
    // printf("&p3 = %p | p3 = %p\n", &p3, p3);
    printf("&p1 = %p | *p1 = %d\n", &ptr1, *ptr1);
    printf("&p2 = %p | *p2 = %d\n", &ptr2, *ptr2);
    // printf("&p3 = %p | *p3 = %d\n", &p3, *p3);
	
	return 0;
}