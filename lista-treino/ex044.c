#include<stdio.h>

int main(){

    int i , n1 , resultado;

    printf("Digite o numero da tabuada\n");
    scanf("%i",&n1);

    for(i=1; i<=10; i++){
        resultado = i * n1;
        printf("%i x %i = %i \n",n1,i,resultado);
    }


}