#include<stdio.h>


int main(){

    int tamanho, soma = 0 , vet[tamanho];
    printf("Digite o tamanaho do vetor\n");
    scanf("%i",&tamanho);

   // int vet[tamanho];

   for( int i = 0 ; i < tamanho ; i++){
        printf("Digite o numero para a posicao %i\n",i);
        scanf("%i",&vet[i]);
   }
   for( int i = 0 ; i < tamanho ; i++){
    soma = vet[i] + soma;
   }
   printf(" A soma calculada = %i", soma);
}