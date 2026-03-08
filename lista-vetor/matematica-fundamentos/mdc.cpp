#include <iostream>

int mdc(int *vet, int n){
    int first = 0;
    int last;
    int run = 1;
    int d = 2;
    while(run){
        int divididos = 0;
        for(int i = 0; i < n; i++){
            if(vet[i] % d == 0){
                divididos++;
            }
            if(divididos == n){
                if(first){
                    last = d;
                }else{
                    first = d;
                }
            }
            vet[i] = vet[i] / d;
            
        }
        d++;


    }
}

using namespace std;
int main(){
    int n;
    cin >> n;
    int vet[n];

    for(int i = 0; i < n; i++){
        cin >> vet[i];
    }

    cout << "mdc = " << mdc(vet, n);
}
