#include<stdio.h>

int verdadeiro_falso( int vet[] , int tamanho);
int main(){
    int tamanho , resp;

    printf("Digite o tamanho dos vetores \n");
    scanf("%i",&tamanho);

    int vet[tamanho];

    for(int i = 0 ; i < tamanho ; i++){
        printf("Digite os valores para a posicao %i \n",i);
        scanf("%i",&vet[i]);
    }
    resp = verdadeiro_falso(vet, tamanho);
    if(resp == 1){
        printf("VERDADEIRO\n");
    }
    else{
        printf("FALSO");
    }
}
int verdadeiro_falso( int vet[] , int tamanho){
  
    for(int i =0 ; i < tamanho ; i++){
        if(vet[i] % 2 == 1){
            return -1;
        }
        else{
            return 1;
        }
}
}