#include<stdio.h>

int quadrado(int );
int main (){

    int num , quad;

    printf("Digite o valor de um número \n");
    scanf("%i",&num);
    quad = quadrado(num);
    printf(" O quadrado do numero = %i\n", quad);


}

int quadrado(int n ) {
    
    n = n*n;
    
    return n ;

}