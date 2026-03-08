#include<stdio.h>

int menu();
int soma(int, int);
int sub(int, int);
int mult(int, int);
int div(int, int);

int main(){

    int n1, n2, op;

    op = menu();

    if(op == 0){
        printf("Programa Encerrado!\n");
    }

    printf("Digite o primeiro numero: \n\n");
    scanf("%d", &n1);

    printf("Digite o segundo numero: \n\n");
    scanf("%d", &n2);

    switch(op){
        case 1:
            soma(n1, n2);
            printf("%d + %d = %d\n", n1, n2, soma(n1, n2));
            break;

        case 2:
            sub(n1, n2);
            printf("%d - %d = %d\n", n1, n2, sub(n1, n2));
            break;

        case 3:
            mult(n1, n2);
            printf("%d * %d = %d\n", n1, n2, mult(n1, n2));
            break;
        
        case 4:
            div(n1, n2);
            printf("%d / %d = %d\n", n1, n2, div(n1, n2));
            break;

        default:
            printf("Escolha uma opcao valida!\n");
            break;
    }
}

int menu(){

    int op1;

    printf("Opcoes Disponiveis: \n1 - Soma\n2 - Subtracao\n3 - Multiplicao\n4 - Divisao\n0 - Sair\nDigite: ");

    scanf("%d", &op1);

    return op1;
}

int soma(int x, int y){
    int soma1;

    soma1 = x + y;

    return soma1;
}

int sub(int x, int y){
    int sub1;
    
    sub1 = x - y;

    return sub1;
}

int mult(int x, int y){
    int mult1;
    
    mult1 = x * y;

    return mult1;
}

int div(int x, int y){
    int div1;
    
    div1 = x * y;

    return div1;
}
