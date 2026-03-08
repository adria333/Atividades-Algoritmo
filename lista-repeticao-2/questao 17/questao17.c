#include<stdio.h>

int main(){

    int i, j, cont;

    for(i = 2; i<=100; i++){

        cont = 0;

        for(j = 1; j<=i; j++){

            if(i%j == 0){
                cont++;
                }
            }

        if(cont == 2){
            printf("%d ", i);

        }
    }

    return 0;
}