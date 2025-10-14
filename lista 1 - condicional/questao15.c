#include<stdio.h>
#include<math.h>
int main(){

    float n1, n2, res;
    int op;
    printf("\nSelecione: \n1 - Soma\n2 - Raiz Quadrada\n3 - Finalizar\n");
    scanf("%d", &op);

    if(op == 1){
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &n1);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &n2);
        res = (n1+n2);
        printf("\nSoma: %.1f + %.1f = %.1f", n1, n2, res);
    }else if(op == 2){
        printf("\nDigite um numero: ");
        scanf("%f", &n1);
        res = sqrt(n1);
        printf("\nRaiz Quadrada de %.0f: %.2f", n1, res);
    }else{
        printf("\nFim!");
    }

    return 0;
}