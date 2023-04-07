#include<stdio.h>

int main(){

    float celcius , farenheit;

    printf("Quantos graus Farenheit está?\n");
    scanf("%f",&farenheit);

    celcius = (5*(farenheit - 32))/9;

    printf("A conversão em celcius = %f",celcius);

    return 0;

}