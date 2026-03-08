#include <stdio.h>

int main()
{
    int n, cont;
    int i = 1;

    scanf("%d", &n);

    cont = 0;
    
    while (i <= n){

        if (n % i == 0){
            cont++;
        }
        i++;
    }

    if (cont == 2){
        printf("%d eh primo, pois eh divisivei somente por %d numeros\n", n, cont);
    }else{
        printf("%d nao eh primo!\n", n);
    }

    return 0;
}