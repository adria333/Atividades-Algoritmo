#include <stdio.h>

int main(){

    for(int i=0; i<10; i = i+1){
        if(i==9){
            printf("%d", i);
        }else{
            printf("%d - ", i);
        }
    }
}
