#include<stdio.h>
int main(){
    int idade;

    printf("\nDigite sua idade: ");
    scanf("%d", &idade);

    if(idade<0){
        printf("\nIdade invalida!");
    }else if(idade<=2){
        printf("\nIdade = %d\nRecem-nascido", idade);
    }else if(idade<=11){
        printf("\nIdade = %d\nCrianca 1", idade);
    }else if(idade<=19){
        printf("\nIdade = %d\nAdolescente", idade);
    }else if(idade<=55){
        printf("\nIdade = %d\nAdulto", idade);
    }else{
        printf("\nIdade = %d\nIdoso", idade);
    }

    return 0;

}