#include <stdio.h>

//A função void não retorna variáveis
void sayHello(void){
    puts("Hello");
}

//Passa o parâmetro greet
void sayHello2(char greet[50]){
    printf("%s", greet);
}

int soma1(void){
    return 1+1;
}

int soma2(int num1, int num2){
    return num1 + num2; 
}

int main(void){

    sayHello();
    sayHello2("Morning");

    int result = soma1();
    printf("\n%d", result);

    int result2 = soma2(2,5);
    printf("\n%d\n", result);

    return 0;
}