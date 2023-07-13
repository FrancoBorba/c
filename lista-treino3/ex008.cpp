#include<stdio.h>

int main(){
    int tamanho;

    printf("Digite o tamanho dos vetores \n");
    scanf("%i",&tamanho);

    int vet1[tamanho] , vet2[tamanho] , vet3[tamanho];

    for(int i = 0 ; i < tamanho ; i++){
        printf("Digite os valores para a posicao %i \n",i);
        scanf("%i",&vet1[i]);
    }
    for(int i = 0 ; i < tamanho ; i++){
        printf("Digite os valores para a posicao %i \n",i);
        scanf("%i",&vet2[i]);
    }
    for(int i = 0 ; i < tamanho ; i++){
        vet3[i] = vet1[i] + vet2[i];
    }
    for(int i = 0 ; i<tamanho ; i++){
        printf("%i           ",vet3[i]);
    }
}