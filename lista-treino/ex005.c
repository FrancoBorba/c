#include<stdio.h>

int main(){

    float metros, cent;

    printf("Digite quantos metros\n");
    scanf("%f",&metros);

    cent = metros*100;

    printf("São %f centimetros",cent);

    return 0;
}