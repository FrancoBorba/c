#include<stdio.h>

int main(){

    int base , potencia , resultado , i;

    resultado = 1;

    printf("Digite a base \n");
    scanf("%i",&base);
    printf("Digite o expoente \n");
    scanf("%i",&potencia);

    for(i=1; i <= potencia ; i++){

        resultado = resultado * base;
    }
    printf("%i\n",resultado);

}