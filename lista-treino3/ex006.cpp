#include<stdio.h>


int main(){

    int tamanho;

    printf("Digite o tamanho dos vetores \n");
    scanf("%i",&tamanho);

    int vet1[tamanho] , vet2[tamanho] ;

    for(int i =0 ; i < tamanho ; i++){
        printf("Digite o valor da posicao %i\n",i);
        scanf("%i",&vet1[i]);
    }
    for(int i = 0 ; i < tamanho ; i++){
        vet2[i] = vet1[i] * vet1[i];
    }
    for(int i = 0 ; i < tamanho ; i++){
        printf(" %i        ",vet1[i]);
       
    }
    printf("\n");
    for(int i = 0 ; i < tamanho ; i++){
        printf(" %i        ",vet2[i]);
       
    }


}