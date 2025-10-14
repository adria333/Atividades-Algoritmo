#include<stdio.h>
int main(){

    int idade;

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if(idade>=18 && idade<=24){
        printf("Grupo de Risco: Baixo");
    }else if(idade>=25 && idade<=40){
        printf("Grupo de Risco: Medio");
    }else if(idade>=41 && idade<=70){
        printf("Grupo de Risco: Alto");
    }else if(idade<18 || idade>70){
        printf("Nao eh possivel adquirir o seguro!");
    }

    return 0;

}