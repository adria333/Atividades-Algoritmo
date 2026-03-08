#include<stdio.h>

float pi();

int main(){

    float valor;

    valor = pi();

    printf("%.4f\n", valor);
}

float pi(){

    float constante = 3.1415;

    return constante;
}