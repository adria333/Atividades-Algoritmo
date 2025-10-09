#include<stdio.h>
#include<string.h>
int main(){
    char senha[10];

    printf("\nDigite sua senha: \n");
    gets(senha);

    if(!strcmp(senha, "ASDFG")){
        printf("\nSenha Correta!\n");
    }else{
        printf("\nSenha Incorreta!\n");
    }
    return 0;
}