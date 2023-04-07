#include<stdio.h>

int main(){

    float celcius , farenheit;

    printf("Qual a temperatura em celcius?\n");
    scanf("%f",&celcius);

    farenheit = ((1.8*celcius) + 32);

    printf("A temperatura em farenheit = %f\n", farenheit);

    return 0;
}