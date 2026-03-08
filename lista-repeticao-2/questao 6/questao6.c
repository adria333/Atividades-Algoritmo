#include<stdio.h>
int main(){

    int i = 0;
    int n;

    scanf("%d", &n);

    do{
        printf("%d ", i);
        i++;
    }while(i<=n);

    return 0;
}