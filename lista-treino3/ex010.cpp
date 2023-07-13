#include<stdio.h>

int main(){

    int veta[5] , vetb[5] , vetc[5];

    printf("Digite os valores para o vetor A\n");
        for(int i = 0 ; i < 5 ; i++){
            scanf("%i",&veta[i]);
    }
    printf("Digite os valores para o vetor B\n");
        for(int i = 0 ; i < 5 ; i++){
            scanf("%i",&vetb[i]);
    }
    for(int i = 0 ; i < 5 ; i++){

        if(veta[i] > vetb[i]){
            vetc[i] = 1;
        }
        else if(veta[i] ==vetb[i]){
            vetc[i] = 0;
        }
        else{
            vetc[i] = -1;
        }
    }
     for(int i = 0 ; i < 5 ; i++){
        printf(" %i      ",veta[i]);
    }
        printf("\n");
     for(int i = 0 ; i < 5 ; i++){
        printf(" %i      ",vetb[i]);
    }
     printf("\n");
     for(int i = 0 ; i < 5 ; i++){
        printf(" %i      ",vetc[i]);
    }



}