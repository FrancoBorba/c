#include<stdio.h>
#include<cstdlib>
#include<ctime>

int main(){
    srand(time(0));
    int tamanho;

    printf("Digite o tamanho dos vetores \n");
    scanf("%i",&tamanho);

    int vet1[tamanho] , vet2[tamanho] ;

    for( int i = 0 ; i < tamanho ; i++){
        vet1[i] = 1 + rand() % 50;
    }
    for( int i = 0 ; i < tamanho ; i++){
        vet2[i] = vet1[i]*2; 
    }
    for(int i = 0 ; i < tamanho ; i++){
        printf(" %i        ",vet1[i]);
       
    }
    printf("\n");
    for(int i = 0 ; i < tamanho ; i++){
        printf(" %i        ",vet2[i]);
       
    }
    
    


    


}