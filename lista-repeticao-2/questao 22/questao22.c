#include<stdio.h>

int main(){
    int n, fatorial = 1;

    scanf("%d", &n);

    for(int i=1; i<=n; i++){
            fatorial = fatorial * i;
    }

    printf("%d! = %d\n", n, fatorial);

    return 0;
}