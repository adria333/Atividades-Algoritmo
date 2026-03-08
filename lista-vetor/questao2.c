#include<stdio.h>

int main(){
    int vet[6];

    printf("Defina os valores do vetor: \n\n");
    for(int i=0; i<6; i++){
        printf("vet[%d] = ", i+1);
        scanf("%d", &vet[i]);
    }

    printf("Vetor = ");
    for(int i=0; i<6; i++){
        printf("| %d | ",vet[i]);
    }

    return 0;
}