#include<stdio.h>
int main(){
    int cargo;

    printf("\nSelecione o cargo:\n1 - Escriturario\n2 - Secretario\n3 - Caixa\n4 - Gerente\n5 - Diretor\n");
    scanf("%d", &cargo);

    if(cargo<1 || cargo>5){
        printf("\nCargo Invalido");
    }else if(cargo==1){
        printf("\nEscriturario - Aumento de 50%%");
    }else if(cargo==2){
        printf("\nSecretario - Aumento de 35%%");
    }else if(cargo==3){
        printf("\nCaixa - Aumento de 20%%");
    }else if(cargo==4){
        printf("\nGerente - Aumento de 10%%");
    }else if(cargo==5){
        printf("\nDiretor - Nao tem aumento");
    }

    return 0;
}
