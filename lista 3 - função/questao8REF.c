#include<stdio.h>

int primo(int);

int main(){

    int n1, res;

    printf("Digite um numero: \n");
    scanf("%d", &n1);

    res = primo(n1);
    
    if(res == 1){
        printf("o valor eh primo!\n");
    }else if (res == 0){
        printf("o valor nao eh primo!\n");
    }

    printf("Resultado da funcao: %d\n", res);

    return 0;

}

int primo(int x){

    int cont = 0;

    if(x < 2){
        return 0;
    }else if(x == 2){
        return 1;
    }

    for(int i = 1; i<= x; i++){
        if(x%i == 0){
            cont = cont + 1;
        }

        if(cont == 2){
            return 1;
        }else{
            return 0;
        }
    }
}