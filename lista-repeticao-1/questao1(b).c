#include <stdio.h>

int main(){

    for(int i=0; i<10; i = i+1){
        if(i==4){
            printf("%d\n", i);
        }else{
            printf("%d ", i);
        }
    }
}