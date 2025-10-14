#include<stdio.h>
int main(){

    float h1, hf, premio, conv1, conv2;

    printf("\nDigite o numero de horas extras (minutos): ");
    scanf("%f", &h1);
    printf("\nDigite o numero de horas-faltas (minutos): ");
    scanf("%f", &hf);

    conv1 = (h1/60);
    conv2 = (hf/60);

    premio = (conv1 - ((2/3)*conv2));

    if(premio > 40){
        printf("Horas Extras: %.2f\nHoras-Faltas: %.2f\nPremio: R$ 500,00", conv1, conv2);
    }else if(premio>=30.01 && premio<=40){
        printf("Horas Extras: %.2f\nHoras-Faltas: %.2f\nPremio: R$ 400,00", conv1, conv2);
    }else if(premio>=20.01 && premio<=30){
        printf("Horas Extras: %.2f\nHoras-Faltas: %.2f\nPremio: R$ 300,00", conv1, conv2);
    }else if(premio>=10 && premio<=20){
        printf("Horas Extras: %.2f\nHoras-Faltas: %.2f\nPremio: R$ 200,00", conv1, conv2);
    }else if(premio<10){
        printf("Horas Extras: %.2f\nHoras-Faltas: %.2f\nPremio: R$ 100,00", conv1, conv2);
    }

    return 0;

}