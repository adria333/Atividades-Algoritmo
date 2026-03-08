#include<stdio.h>

int main(){

    int vet[10], par = 0;

    //leitura de valores//
    printf("\nDigite os valores do vetor: \n");
    for(int i=0; i<10; i++){
        printf("vet[%d] = ", i);
        scanf("%d", &vet[i]);
    }

    //apresentacao do vetor//
    printf("\nVetor: \n");
    for(int i=0; i<10; i++){
        printf("| %d ", vet[i]);
    }

    //par//
    for(int i=0; i<10; i++){
        if(vet[i]%2==0){
            par = par + 1;
        }
    }

    //valores pares
    printf("\nQuantidade de Numeros Pares: %d\n", par);

}