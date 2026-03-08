#include<stdio.h>

int ver(int, int);

int main(){

    int n1, n2, resultado;

    scanf("%d", &n1);
    scanf("%d", &n2);

    resultado = ver(n1, n2);

    printf("%d eh o maior numero\n", resultado);
}

int ver(int x, int y){

    if(x>y){
        return x;
    }else if(x<y){
        return y;
    }

}