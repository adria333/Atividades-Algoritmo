//questao 14//
#include<stdio.h>
int main(){
    
    int tabuada, i, j;
    
    for(i=1; i<=10; i++){
        printf("\nTabuada %d:\n", i);
        for(j=1; j<=10; j++){
            tabuada = i*j;
            printf("%d x %d = %d\n", i, j, tabuada);
        }
    }
}