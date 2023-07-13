#include<stdio.h>

int main(){

    int tamanho;

    printf("Digite o tamanho dos vetores \n");
    scanf("%i",&tamanho);

    int vet[tamanho] ;
    char vetb[tamanho];

    for(int i = 0 ; i < tamanho ; i++){
        printf("Digite os valores para a posicao %i \n",i);
        scanf("%i",&vet[i]);
    }
    for( int i = 0 ; i < tamanho ; i++){

            if(vet[i]< 7){
                vetb[i] = 'a';
            }
            else if(vet[i] == 7){
                vetb[i] = 'b';
            }
            else if(vet[i] > 7 && vet[i] < 10){
                vetb[i] = 'c';
            }
            else if(vet[i] == 10){
                vetb[i] = 'd';
            }
            else{
                vetb[i] = 'e';
            }
    } 
    for(int i = 0 ; i<tamanho ; i++){
        printf("%i           ",vet[i]);
    }
    for(int i = 0 ; i<tamanho ; i++){
        printf("%c           ",vetb[i]);
    }


    
}