#include<stdio.h>
int main(){
    float salario,r1,r2;

    printf("\nDigite seu salario: \n");
    scanf("%f", &salario);

    if(salario<=300){
        r1 = (salario * 1.5);
        printf("\nSalario Reajustado: %.2f\n", r1);
    }else{
        r2 = (salario * 1.3);
        printf("\nSalario Reajustado: %.2f\n", r2);
    }
    return 0;
}