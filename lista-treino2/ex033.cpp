#include<stdio.h>

void divide( float& , float&);

int main(){

    float n1 , n2;
    printf("Digite um numero\n");
    scanf("%f",&n1);
    printf("Digite outro numero \n");
    scanf("%f",&n2);
    divide(n1 , n2);
    printf("Resultado da primeira divisao por 10 = %.2f\n ",n1);
    printf("Resultado da segunda divisao por 10 = %.2f\n",n2);



}

void divide(float& m , float& n){

    m = m/10;
    n = n/10;

}