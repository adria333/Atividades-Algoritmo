#include<stdio.h>
int main(){
    float n1,n2;

    printf("\nDigite o primeiro numero: ");
    scanf("%f", &n1);
    printf("\nDigite o segundo numero: ");
    scanf("%f", &n2);

    if(n1 == n2){
        printf("\nO primeiro valor eh igual ao segundo");
    }else if(n1 < n2){
        printf("\nO primeiro valor eh menor que o segundo");
    }else if(n1 > n2){
        printf("\nO primeiro valor eh maior que o segundo");
    }
    return 0;
}