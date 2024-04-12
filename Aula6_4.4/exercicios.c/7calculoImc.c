# include <stdio.h>

int main(){
    float peso;
    float altura;
   
    printf("\nCalculadora de IMC\n");

    printf("\nDigite seu peso(kg):");
    scanf("%f", &peso);

    printf("\nDigite sua altura(m):");
    scanf("%f", &altura);

    float imc = peso/(altura*altura);

    if (imc < 18.5){
        printf("\nIMC: %2.f\n\nAbaixo do normal", imc);
    }
    else if(25 > imc && imc > 18.5 ){
        printf("\nIMC: %2.f\n\nNormal", imc);
    }
    else if(30 > imc && imc > 25){
        printf("\nIMC: %2.f\n\nSobrepeso", imc);
    }
    else if(35 > imc && imc > 30){
        printf("\nIMC: %2.f\n\nObesidade grau I", imc);
    }
    else if(40 > imc && imc > 35){
        printf("\nIMC: %2.f\n\nObesidade grau II", imc);
    }else {
        printf("\nIMC: %2.f\n\nObesidade grau III", imc);
    }

    return 0;

    
}