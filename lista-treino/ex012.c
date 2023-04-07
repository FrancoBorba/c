#include<stdio.h>

int main(){

    float altura , peso ;

    printf("Insira sua altura em metros \n");
    scanf("%f",&altura);
   

    peso = (72.7 * altura) - 58;

    printf("Seu peso ideal = %f" , peso);

    return 0;



}