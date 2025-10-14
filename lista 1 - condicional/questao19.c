#include<stdio.h>
int main(){
    float salarioMinimo, horasTrab, horasExt, salarioFinal, valorHora, salarioMes, salarioBruto, salarioLiq, salario, numHorasExt;
    int dep1, dep2;

    printf("\nDigite o salario minimo: ");
    scanf("%f", &salarioMinimo);
    printf("\nDigite o numero de horas trabalhadas: ");
    scanf("%f", &horasTrab);
    printf("\nDigite o numero de dependentes: ");
    scanf("%d", &dep1);
    printf("\nDigite a quantidade de horas extras: ");
    scanf("%f", &numHorasExt);

    valorHora = (0.2*salarioMinimo);
    salarioMes = (horasTrab * valorHora);
    dep2 = (32*dep1);
    horasExt = valorHora*1.5*numHorasExt;

    salarioBruto = salarioMes + dep2 + horasExt;

    //imposto de renda
    if(salarioBruto>=200 && salarioBruto<=500){
        salarioLiq = (salarioBruto - (salarioBruto*0.1));
    }else if(salarioBruto>500){
        salarioLiq = (salarioBruto - (salarioBruto*0.2));
    }else{
        salarioLiq = salarioBruto;
    }

    //gratificacao
    if(salarioLiq<350){
        salario = salarioLiq + 100;
    }else if(salarioLiq>=350){
        salario = salarioLiq + 50;
    }

    printf("\nSalario Final: %.2f", salario);

    return 0;

}