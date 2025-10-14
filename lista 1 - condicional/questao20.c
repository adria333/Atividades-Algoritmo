#include<stdio.h>
#include<math.h>
int main(){

    float a,b,c,delta,raiz1,raiz2;

    printf("\nDigite o valor 'a' da equacao: ");
    scanf("%f", &a);
    printf("\nDigite o valor 'b' da equacao: ");
    scanf("%f", &b);
    printf("\nDigite o valor 'c' da equacao: ");
    scanf("%f", &c);

    //validacao 'a'
    if(a==0){
        printf("\nEssa nao eh uma equacao de segundo grau!");
    }else{

        delta = ((b * b) - 4 * a * c);

        // discriminante (delta):
        if (delta < 0){
            printf("\nA equacao nao possui valores reais!");
        }else if (delta == 0){
            raiz1 = (-b + sqrt(delta)) / 2 * a;
            printf("\nPossui uma unica raiz real: %.2f", raiz1);
        }else if (delta > 0){
            raiz1 = (-b + sqrt(delta)) / 2 * a;
            raiz2 = (-b - sqrt(delta)) / 2 * a;
            printf("\nRaiz 1: %.2f\nRaiz 2: %.2f", raiz1, raiz2);
        }
    }

    return 0;

}