//questao 9//

#include<stdio.h>
int main(){
    
    int n, tabuada;
    
    scanf("%d", &n);
    
    printf("Tabuada do Valor %d:\n", n);
    
    for(int i=0; i<=10; i++){
        tabuada = n*i;
        printf("%dx%d = %d\n", n, n, i, tabuada);
    }
}