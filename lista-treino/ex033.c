#include<stdio.h>

int main(){

    int num;

    printf("Digite um numero inteiro entre 0 e 10 \n");
    scanf("%i",&num);

    if( (num < 0)|| (num >10)){
        printf("NUMERO INVALIDO \n");

    }
    while( (num < 0)|| (num >10))
    {
    
    printf("Digite um numero inteiro entre 0 e 10 \n");
    scanf("%i",&num);
    printf("NUMERO INVALIDO \n");
    
    }

    printf("O numero foi %i",num);
    
    return 0;
    
    
}