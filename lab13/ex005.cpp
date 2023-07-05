#include<stdio.h>
#include<cstdlib>
#include<ctime>

void bubblesort(int vet[], int tamanho);
int buscabinaria( int vet[] , int tamanho , int chave);
int main(){
    srand(time(0));
    int tamanho , chave;
    printf("Digite o tamanho do vetor desejado\n");
    scanf("%i",&tamanho);
    int vet[tamanho];
    

        for(int i = 0 ; i < tamanho ; i++){
        vet[i] = 1 + rand() % 50;
    }
    printf("Vetor fora de ordem \n");
    for(int i = 0 ; i < tamanho ; i++){
        printf("%i     ", vet[i]);
    }
    printf("\n");
    bubblesort(vet, tamanho);
    printf("Vetor em ordem \n");
    for(int i = 0 ; i < tamanho ; i++){
        printf("%i     ", vet[i]);
    }

    printf("Digite um numero para ver sua posicao no vetor\n");
    scanf("%i",&chave);
    int resp;
    resp = buscabinaria( vet , tamanho , chave);
     if(resp == -1){
        printf(" O numero nao esta no vetor\n");
    }
    else{
        printf(" O numero esta na posicao %i\n ",resp);
    }

}

void bubblesort( int vet[] , int tamanho){
    int temp;
    for(int pass = 0 ; pass < (tamanho-1) ; pass++){
        for(int i = 0 ; i < (tamanho -1 ); i++){
            if(vet[i] > vet[i +1]){
                temp = vet[i];
                vet[i] = vet[i+1];
                vet[i+1] = temp;
            }
        }
    }

}
int buscabinaria( int vet[] , int tamanho , int chave){
    int ini=0, fim= tamanho-1, meio;
    while (ini <= fim)
    {
        meio = ( ini + fim)/2;
        if(vet[meio] == chave){
            return ( meio + 1); // retorna a posição
        }
         if (vet[meio] < chave) {
            ini = meio + 1; 
        } else {
            fim = meio - 1;
        }
    }
    return -1;

}