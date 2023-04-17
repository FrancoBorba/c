#include<stdio.h>

int main(){

    int num;

    printf("Digite um valor positivo");
    scanf("%i",&num);

    if(num < 0){
        printf("ERRO , VALOR NEGATIVO!");
    }
    return 0;
}