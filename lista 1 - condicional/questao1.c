#include<stdio.h>
int main(){
    float n1,n2,n3,n4,media;

    printf("\nDigite a nota 1: \n");
    scanf("%f", &n1);
    printf("\nDigite a nota 2: \n");
    scanf("%f", &n2);
    printf("\nDigite a nota 3: \n");
    scanf("%f", &n3);
    printf("\nDigite a nota 4: \n");
    scanf("%f", &n4);

    media = ((n1+n2+n3+n4)/4);

    if(media>=7){
        printf("Aprovado");
    }else{
        printf("Reprovado");
    }
    return 0;
}