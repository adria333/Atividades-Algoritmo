#include<stdio.h>

int ver(int, int);

int main(){

    int n1, n2;

    scanf("%d", &n1);
    scanf("%d", &n2);

    ver(n1, n2);
}

int ver(int x, int y){

    if(x>y){
        printf("%d eh maior que %d\n", x, y);
    }else if(x<y){
        printf("%d eh menor que %d\n", x, y);
    }else{
        printf("%d eh igual a %d\n", x, y);
    }
}