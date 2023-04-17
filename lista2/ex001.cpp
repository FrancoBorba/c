#include<stdio.h>

int main(){
    int num;
    char caracter;

    printf("Digite um numero para ser convertido\n");
    scanf("%i",&num);
    
    caracter = num;

    printf("%c",caracter);

    return 0;
}