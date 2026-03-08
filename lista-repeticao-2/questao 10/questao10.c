#include<stdio.h>

int main(){

    int i = 0;
    int n, tabuada;

    scanf("%d", &n);

    printf("Tabuada %d:\n", n);

    while(i<=10){
        tabuada = n*i;
        printf("%d x %d = %d\n", n, i, tabuada);
        i++;
    }
}