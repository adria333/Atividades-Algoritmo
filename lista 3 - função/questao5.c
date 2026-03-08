#include<stdio.h>

int num(int);

int main(){

    int n1, resultado;

    printf("digite um numero: \n");
    scanf("%d", &n1);

    resultado = num(n1);

    printf("%d^2 = %d\n", n1, resultado);
}

int num(int x){

    return x*x;
}