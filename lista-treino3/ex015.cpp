#include<stdio.h>
#include<cstdlib>
#include<ctime>

int main(){
    srand(time(0));
    int vet[20] , menor = 9999;
    for(int i= 0 ; i < 20 ; i++){
        vet[i] = 1 + rand() % 50;
    }
    for(int i = 0 ; i < 20 ; i++){
        if(vet[i] < menor){
            menor = vet[i];
        }
    }
   

    printf("O menor elemento = %i\n",menor);
}