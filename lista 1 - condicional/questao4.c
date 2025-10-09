#include<stdio.h>
int main(){
    int idade;

    printf("\nDigite sua idade: \n");
    scanf("%d", &idade);

    if(idade>=18){
        printf("\nVoce eh maior de idade!");
    }else{
        printf("\nVoce eh menor de idade!");
    }
    return 0;
}