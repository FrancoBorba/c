#include<stdio.h>
#include<cstdlib>
#include<ctime>

int pesquisaLinear(int vet[500] , int chave);

int main(){
    srand(time(0));
    int vet[10];
    int chave , resp ;
    printf("Digite o numero que deseja procurar \n");
    scanf("%i",&chave);

    for(int i = 0 ; i < 10 ; i++){
        vet[i] = 1 + rand() % 10;
    }
    for(int i = 0 ; i < 10 ; i++){
        printf("%i      \n",vet[i]);
    }
    
   resp = pesquisaLinear( vet, chave);
    if(resp == -1){
        printf(" O numero nao esta no vetor\n");
    }
    else{
        printf(" O numero esta na posicao %i\n ",resp);
    }

    return 0;
}

int pesquisaLinear(int vet[10] , int chave){

    for(int i = 0 ; i < 10 ; i++){

        if(vet[i]  == chave){
             return (i + 1);
             break;
        }
        
    }
    return -1;
}