#include<stdio.h>

int main(){

    int vet[8], x, y, soma;

    //leitura dos valores//
    printf("Valores do Vetor: \n");
    for(int i=0; i<8; i++){
        printf("vet[%d] = ", i);
        scanf("%d", &vet[i]);
    }

    //leitura das posicoes//
    printf("\nEscolha a Primeira Posicao: ");
    scanf("%d", &x);

    printf("\nEscolha a Segunda Posicao: ");
    scanf("%d", &y);

    //soma das posicoes//
    soma = vet[x] + vet[y];

    //apresentacao do vetor//
    printf("Vetor = ");
    for(int i=0; i<8; i++){
        printf("| %d ", vet[i]);
    }

    //apresentacao da soma//
    printf("\n\nSoma das Posicoes = vet[%d] + vet[%d] = %d", x, y, soma);
}