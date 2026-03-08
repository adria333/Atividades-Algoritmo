#include<stdio.h>

int media(int, int, int);

int main(){

    int n1, n2, n3, resultado;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &n1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &n2);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &n3);

    resultado = media(n1, n2, n3);

    printf("Media Dos Valores: (%d + %d + %d)/3 = %d\n", n1, n2, n3, resultado);
}

int media(int x, int y, int z){

    int media1 = (x+y+z)/3;

    return media1;
}