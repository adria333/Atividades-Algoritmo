#include<stdio.h>

int main(){

    //letra a//
    int vet[6] = {1, 0, 5, -2, -5, 7}, soma;

    //letra b//
    soma = vet[0]+vet[1]+vet[5];

    printf("\n\nvet[6] = {1, 0, 5, -2, -5, 7}\n\n");

    printf("Soma das Posicoes [0, 1, 5]: %d + %d + %d = %d\n", vet[0], vet[1], vet[5], soma);

    //letra c//

    vet[4] = 100;
    printf("\n\nVetor = ");
    printf("| 1 | 0 | 5 | %d | -5 | 7 |", vet[4]);
    
    //letra d//

    for(int i=0; i<6; i++){
        printf("%d\n", vet[i]);
    }

}
    