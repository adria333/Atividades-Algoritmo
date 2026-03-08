#include<stdio.h>

int usuario();

int main(){

    int num;
    num = usuario();
    printf("Seu numero eh: %d\n", num);

}

int usuario(){

    int x;
    printf("Digite seu numero: \n");
    scanf("%d", &x);
    return x;
}