#include<stdio.h>

int main(){
    int a , b , soma;

    printf("Digite um valor \n");
    scanf("%i" , &a);
    printf("Digite outro valor \n");
    scanf("%i" , &b);
    soma = a + b;

    printf("X = %i\n", soma);

    return 0;
}