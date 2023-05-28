#include<stdio.h>

int quadrado(int );
int main (){

    int num , quad;

    printf("Digite o valor de um número \n");
    scanf("%i",&num);
    quadrado(num);
    


}

int quadrado(int n ) {
    
    n = n*n;
    printf(" O quadrado do numero = %i\n",n);
    return n ;

}