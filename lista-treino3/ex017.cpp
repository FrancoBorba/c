#include<stdio.h>
#include<cstdlib>
#include<ctime>
int buscaBinaria( int vet[], int tamanho ,int chave);
void bubblesort(int vet[],int tamanho);

int main(){
    srand(time(0));
        int tamanho,chave,resp;
         printf(" Digite o tamanho do vetor \n");
    scanf("%i",&tamanho);
    int vet[tamanho];
        for(int i = 0 ; i < tamanho ; i++){
           vet[i] = 1 + rand() % 20;
        }
        printf("VETOR DESORDENADO\n");
        for(int i = 0 ; i <tamanho ; i++){
        printf(" %i      ",vet[i]);
        
    }
    printf("\n");
        printf("Digite o numero que deseja encontrar\n");
        scanf("%i",&chave);
        printf("VETOR ORDENADO\n");
        bubblesort(vet , tamanho);
        
        for(int i = 0 ; i <tamanho ; i++){
        printf(" %i      ",vet[i]);
    }
    printf("\n");
        resp = buscaBinaria(vet , tamanho , chave);
         if(resp == -1){
        printf(" O numero nao esta no vetor\n");
    }
    else{
        printf(" O numero esta na posicao %i\n ",resp);
    }

}
void bubblesort( int vet[10] , int tamanho){
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

int buscaBinaria( int vet[], int tamanho ,int chave){
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