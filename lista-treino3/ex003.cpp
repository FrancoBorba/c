#include <stdio.h>

int main(){

    int vet1[50] , vet2[50];

    for( int i = 0 ; i < 50 ; i++){
        printf("Digite um valor para a posicao %i\n" , i);
        scanf("%i",&vet1[i]);
    }
    for( int i = 0 ; i < 50 ; i++){
        vet2[i] = vet1[i];

    }
    for(int i = 0 ; i < 50 ; i++){
        printf(" %i        ",vet1[i]);
       
    }
    for(int i = 0 ; i < 50 ; i++){
       
       printf(" %i        ",vet2[i]);
    }
    
    




}