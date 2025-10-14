#include<stdio.h>
int main(){
    int num;

    printf("\nDigite um numero: ");
    scanf("%d", &num);

    if(num%2==0){
        printf("\nEsse numero eh par!");
    }else{
        printf("\nEsse numero eh impar!");
    }
    return 0;
}