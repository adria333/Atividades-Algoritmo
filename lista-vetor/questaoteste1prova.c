#include<stdio.h>

void leiaVet(int vet[], int tam);
void escrevaVet(int vet[], int tam);
void ordenaDecrescente(int vet[], int tam);

int main(){

    int vet[20];

    leiaVet(vet, 20);
    
    printf("Vetor Desordenado: \n");
    escrevaVet(vet, 20);

    ordenaDecrescente(vet, 20);
    
    printf("Vetor Ordenado: \n");
    escrevaVet(vet, 20);

}


void leiaVet(int vet[], int tam){
    printf("Digite os valores do vetor: ");
    for(int i=0; i<tam; i++){
        printf("vet[%d] =  ", i);
        scanf("%d", &vet[i]);
    }
}

void escrevaVet(int vet[], int tam){

    printf("Valores do Vetor: ");
        for(int i=0; i<tam; i++){
        printf("| %d ", vet[i]);
        }
}

void ordenaDecrescente(int vet[], int tam){
    int aux;

    for(int i = 0; i<tam - 1; i++){
        for(int j = 0; j<tam - 1 - i; j++){
            if(vet[j]<vet[j+1]){
                aux = vet[j];
                vet[j] = vet[j+1];
                vet[j+1] = aux;
            }
        }
    }

}