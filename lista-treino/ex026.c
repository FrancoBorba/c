#include<stdio.h>

int main(){

    float altura , peso;
    char sexo;

    printf("Digite seu sexo com M ou F\n");
    scanf("%c",&sexo);
     printf("Insira sua altura em metros \n");
    scanf("%f",&altura);

    if( sexo=='M' || sexo == 'm'){
        peso = (72.7 * altura) - 58;
        printf("Seu peso ideal = %f",peso);
    }
    else{
        peso = (62.1 * altura) - 44.7;
        printf("Seu peso ideal = %f",peso);
    }

    return 0;
}