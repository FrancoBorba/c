#include<stdio.h>

int main(){
    
    int tamanho , vet[tamanho];

    printf("Digite o tamanaho do vetor\n");
    scanf("%i",&tamanho);

    for( int i = 0 ; i < tamanho ; i++){
        printf("Digite o numero para a posicao %i\n",i);
        scanf("%i",&vet[i]);
   }
    for( int i = 0 ; i < tamanho ; i++){

        if( vet[i] % 2 == 0){
            vet[i] = 1;
        }
        else{
            vet[i] = -1;
        }
   }

    printf("VETOR=\n");
    
    for(int i = 0 ; i < tamanho ; i++){
        printf("%i     ",vet[i]);
    }

    return 0;
}


