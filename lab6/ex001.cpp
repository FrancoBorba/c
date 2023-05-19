#include<stdio.h>

int main(){

    int clientes , valores ,  contItens , i;
    float mediaCliente , mediaTotal ;

    contItens = 0;
    mediaTotal =0;
    mediaCliente = 0;

    printf("Quantos clientes serão atendidos\n");
    scanf("%i",&clientes);

    for( i = 1 ; i <= clientes ; i++){


        do{
            printf("Adicione o valor do produto , caso queira encerrar as compras insira um valor negativo \n");
            scanf("%i",&valores);
            if(valores < 0){
                printf("Indo para o proximo cliente\n");
                break;
            }
            mediaCliente = mediaCliente + valores;
            contItens++;


        }while(valores >= 0);

    mediaCliente = mediaCliente/contItens;
    mediaTotal = mediaTotal + mediaCliente;
    
    printf(" A media do cliente foi  %2.f\n", mediaCliente);
    mediaCliente = 0;
    contItens = 0;

    }
   
    printf(" A media total foi %2.f\n",mediaTotal/(i-1));

    return 0;

}