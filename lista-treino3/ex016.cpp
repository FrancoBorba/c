#include<stdio.h>

int pesquisalinear(int vet[], int chave);
int main(){

        int vet[20],chave,resp;
        for(int i = 0 ; i < 20 ; i++){
            printf("Digite um valor para a posição %i\n",i);
            scanf("%i",&vet[i]);
        }
        printf("Digite o numero que deseja encontrar\n");
        scanf("%i",&chave);
        resp = pesquisalinear(vet,chave);
    if(resp == -1){
        printf(" O numero nao esta no vetor\n");
    }
    else{
        printf(" O numero esta na posicao %i\n ",resp);
    }

    return 0;
}
    

int pesquisalinear(int vet[],int chave){

    for(int i = 0 ; i < 20 ; i++){
        if(vet[i] == chave){
            return i+1;
            break;
        }
    }
    return -1;

}