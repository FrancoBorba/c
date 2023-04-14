#include<stdio.h>

int main(){

    int num , i , quantidade , maior , menor, soma;

    maior = 0;
    menor = 9999;
    soma = 0;

    printf("Digite a quantidade de numeros a serem analisados\n");
    scanf("%i",&quantidade);

    for(i=1;i<=quantidade;i++){
        printf("Digite um numero\n");
        scanf("%i",&num);
        if((num>1000)|| (num < 0)){
            printf("VALOR INVALIDO , tente de novo\n"); 
            printf("Digite um numero\n");
            scanf("%i",&num);
            soma = num + soma;
            if(num > maior){
            maior = num;
                            }
            if(num < menor){
            menor = num;
                            }
            
                                  }
        else{
            soma = num + soma;
            if(num > maior){
            maior = num;
                            }
            if(num < menor){
            menor = num;
                            }
            }

        
    }

    printf("O maior numero foi %i\n",maior);
    printf("O menor numero foi %i\n", menor);
    printf("A soma dos numeros foi %i\n",soma);

    return 0;
}