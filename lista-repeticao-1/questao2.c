#include <stdio.h>

int main(){
    int op;
    int quantNum = 0;

    printf("\nSelecione uma opcao:\n1 - Imprimir numeros pares de 1 a 100\n2 - Imprimir numeros impares de 1 a 100\n3 - Imprimir numeros divisiveis de 5\nSelecione: ");
    scanf("%d", &op);

    switch(op){
        case 1: 
            printf("\nNumeros Pares: ");
            for(int i = 2; i<=100; i=i+2)
            {
                printf("%d ", i);
            }
            break;

        case 2:
            printf("\nNumeros Impares: ");
            for (int i = 1; i < 100; i = i + 2)
            {
                printf("%d ", i);
            }
            break;

        case 3:
            printf("\nDivisiveis por 5: ");
            for(int i = 5; i<=100; i=i+5)
            {
                printf("%d ", i);
                quantNum = quantNum + 1;//quantNum++
            }
            printf("\nQuantidade de Numeros Divisiveis por 5: %d\n",quantNum);

            break;

        default:
            printf("\nOpcao Invalida!\n");
            break;
    }

}