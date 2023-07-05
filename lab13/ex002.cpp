#include<stdio.h>

int buscaBinaria( int vet[], int tamanho ,int chave);

int main(){

    int tamanho , chave , resp , veti;

    printf(" Digite o tamanho do vetor \n");
    scanf("%i",&tamanho);

    int vet[tamanho];

    printf("Digite o numero inicial para ser gerado um vetor ordenado\n");
    scanf("%i", &veti);

    for(int i = 0 ; i < tamanho ; i++){
        vet[i] = veti + i;
    }
    

    printf(" Digite o numero que deseja ser encontrado \n");
    scanf("%i",&chave);

    resp = buscaBinaria( vet , tamanho , chave);
    if(resp == -1){
        printf(" O numero nao esta no vetor\n");
    }
    else{
        printf(" O numero esta na posicao %i\n ",resp);
    }


}
int buscaBinaria( int vet[], int tamanho ,int chave){
    int ini=0, fim= tamanho-1, meio;

    while (ini <= fim)
    {
        meio = ( ini + fim)/2;
        if(vet[meio] == chave){
            return ( meio + 1);
        }
         if (vet[meio] < chave) {
            ini = meio + 1;
        } else {
            fim = meio - 1;
        }
    }
    return -1;

}