#include<stdio.h>
int main(){
    int idade;

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if(idade>=5 && idade<=7){
        printf("\nCategoria: Infantil A");
    }else if(idade>=8 && idade<=10){
        printf("\nCategoria: Infantil B");
    }else if(idade>=11 && idade<=15){
        printf("\nCategoria: Juvenil A");
    }else if(idade>=14 && idade<=17){
        printf("\nCategoria: Juvenil B");
    }else if(idade>=18){
        printf("\nCategoria: Senior");
    }else{
        printf("\nMenores de 5 anos nao sao permitidos!");
    }
    return 0;
}