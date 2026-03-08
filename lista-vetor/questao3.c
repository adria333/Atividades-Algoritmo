#include<stdio.h>

int main (){

    int vet1[10], vet2[10];

    //guardar valores primeiro vetor//
    printf("Escreva os valores do primeiro vetor: \n");
    for(int i=0; i<10; i++){
        printf("Vet[%d] = ", i+1);
        scanf("%d", &vet1[i]);
    }

    //quadrado dos valores = segundo vetor//
    for(int i=0; i<10; i++){
        vet2[i] = vet1[i] * vet1[i];
    }

    //apresentar os valores do primeiro vetor//
    printf("\n\nPrimeiro Vetor: \n");
    for(int i=0; i<10; i++){
        printf("| %d | ", vet1[i]);
    }

    printf("\n\nSegundo Vetor: \n");
    for(int i=0; i<10; i++){
        printf("| %d | ", vet2[i]);
    }
}