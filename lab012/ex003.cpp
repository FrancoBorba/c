#include <stdio.h>

int main(){

    int vet1[10] , vet2[10];

    for( int i = 0 ; i < 10 ; i++){
        printf("Digite um valor para a posicao %i\n" , i);
        scanf("%i",&vet1[i]);
    }
    for( int i = 0 ; i < 10 ; i++){
        int cont = 10;
        vet2[i] = vet1[cont];
        cont --;

    }
    for(int i = 0 ; i < 10 ; i++){
        printf(" %i      \n",vet1[i]);
       printf(" %i      \n",vet2[i]);
    }

}    