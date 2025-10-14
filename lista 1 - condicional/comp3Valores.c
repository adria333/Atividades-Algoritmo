#include<stdio.h>
int main(){
    int n1,n2,n3;

    printf("\nDigite o numero 1: ");
    scanf("%d", &n1);
    printf("\nDigite o numero 2: ");
    scanf("%d", &n2);
    printf("\nDigite o numero 3: ");
    scanf("%d", &n3);

    if(n1==n2 && n2==n3){
        printf("\nTodos os valores sao iguais!");
    }else if(n1==n2){
        if(n2<n3){
            printf("\nO terceiro numero eh maior que os dois primeiros!");
        }else{
            printf("\nO terceiro numero eh menor que os dois primeiros!");
        }
    }else if(n2==n3){
        if(n2>n1){
            printf("\nO terceiro e segundo numero sao iguais e maiores que o primeiro!");
        }else{
            printf("\nO terceiro e segundo numero sao iguais e menores que o primeiro!");
        }
    }else if(n1==n3){
       if(n3>n2){
            printf("\nO terceiro e primeiro numero sao iguais e maiores que o segundo!");
        }else{
            printf("\nO terceiro e primeiro numero sao iguais e menores que o segundo!");
        } 
    }
    return 0;
    }