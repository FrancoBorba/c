#include<stdio.h>

int main(){

    int num1 , num2 , soma;

    printf("Digite um numero\n");
    scanf("%i",&num1);
    printf("Digite outro numero\n");
    scanf("%i",&num2);

    soma = num1 + num2;

    printf("A soma entre %i e %i  = %i", num1 , num2 , soma);
}