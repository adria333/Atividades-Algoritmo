#include<stdio.h>

int num(int);

int main(){

    int num1;

    scanf("%d", &num1);

    num(num1);

}

int num(int x){

    if(x%2 == 0){
        printf("%d eh par!\n", x);
    }else{
        printf("%d eh impar!\n", x);
    }
}