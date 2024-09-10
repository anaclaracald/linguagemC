// **Exercício 4**: Funções que Retornam Structs
// Objetivo: Definir uma struct para representar uma data e uma função que cria uma nova data adicionando um número de dias a uma data existente.
// Passos:
// 1 Defina uma struct Data com três campos: dia, mes e ano (todos do tipo int).
// 2 Implemente uma função adicionarDias que recebe uma Data e um número de dias, e retorna uma nova Data com os dias adicionados.
// 3 No main, crie uma data, chame a função para adicionar dias, e imprima a nova data.

#include <stdio.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}Data;

int anoBissexto(int ano){
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;  
    }
    return 0;
}

int numeroDiasNoMes(int mes, int ano){
    if (mes == 1||3||5||7||8||10||12){
        return 31;
    }else if (mes == 4||6||9||11){
        return 30;
    }else if (mes == 2){
        if (anoBissexto(ano) == 1){return 29;} else{return 28;}
    }else {
        return 0;
    }
}

Data adicionaDias(Data dataInicial, int diasParaAdicionar) {
    dataInicial.dia += diasParaAdicionar;
    
    while (dataInicial.dia > numeroDiasNoMes(dataInicial.mes, dataInicial.ano)) {
        dataInicial.dia -= numeroDiasNoMes(dataInicial.mes, dataInicial.ano);
        dataInicial.mes++;
        
        if (dataInicial.mes > 12) {
            dataInicial.mes = 1;
            dataInicial.ano++;
        }
    }
    return dataInicial;
}

int main(){
    Data dataInicial;

    dataInicial.dia = 01;
    dataInicial.mes = 05;
    dataInicial.ano = 2006;

    int diasParaAdicionar = 5;

    Data novaData = adicionaDias(dataInicial, diasParaAdicionar);

    printf("Data inicial: %d/%d/%d\n", dataInicial.dia, dataInicial.mes, dataInicial.ano);
    printf("Nova data: %d/%d/%d\n", novaData.dia, novaData.mes, novaData.ano);

    return 0;
}