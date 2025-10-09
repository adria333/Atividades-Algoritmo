#include<stdio.h>
int main(){
    float salario,reajuste;

    printf("\nDigite seu salario: \n");
    scanf("%f", &salario);

    reajuste = (salario * 1.3);

    if(salario<=500){
        printf("\nReajuste Autorizado: %.2f", reajuste);
    }else{
        printf("\nReajuste Nao Autorizado\n");
    }

    return 0;
}