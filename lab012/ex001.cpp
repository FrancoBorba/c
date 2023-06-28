#include <stdio.h>

int main(){
    int cont = 0;
    int par[20];

    for(int i = 0 ; i < 20 ; i++){
        printf("Digite um dado para a posição %i \n",i);
        scanf("%i",&par[i]);
    }
     for(int i = 0 ; i < 20 ; i++){
        
        if(par[i] % 2 == 0){
            cont++;
        }
       if(cont == 20){
        printf(" todos os valores sao par");
       }
    }
    





}